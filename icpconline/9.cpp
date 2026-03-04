#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

struct Edge {
    int u, v;
    long long cost;
    bool reliable;
};

// More efficient solution using edge connectivity concepts
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, s;
    cin >> n >> m >> s;
    
    vector<int> evacuation(s);
    vector<bool> inS(n+1, false);
    for (int i = 0; i < s; i++) {
        cin >> evacuation[i];
        inS[evacuation[i]] = true;
    }
    
    vector<Edge> edges;
    for (int i = 0; i < m; i++) {
        int u, v, t, c;
        cin >> u >> v >> t >> c;
        
        if (t == 0) {
            edges.push_back({u, v, (long long)c, false});
        } else if (t == 1) {
            edges.push_back({u, v, 0LL, true});
        } else {
            edges.push_back({u, v, (long long)c, true});
        }
    }
    
    // First build graph with all reliable edges
    vector<vector<pair<int, long long>>> adj(n+1);
    for (auto& e : edges) {
        if (e.reliable) {
            adj[e.u].push_back({e.v, e.cost});
            adj[e.v].push_back({e.u, e.cost});
        }
    }
    
    // Check connectivity of evacuation cities with reliable edges only
    vector<bool> visited(n+1, false);
    function<void(int)> dfs = [&](int u) {
        visited[u] = true;
        for (auto& [v, w] : adj[u]) {
            if (!visited[v]) dfs(v);
        }
    };
    
    // Find first evacuation city
    int start = -1;
    for (int i = 0; i < s; i++) {
        if (inS[evacuation[i]]) {
            start = evacuation[i];
            break;
        }
    }
    
    if (start != -1) dfs(start);
    
    // Check if all evacuation cities are connected
    bool allConnected = true;
    for (int i = 0; i < s; i++) {
        if (!visited[evacuation[i]]) {
            allConnected = false;
            break;
        }
    }
    
    if (!allConnected) {
        cout << -1 << "\n";
        return 0;
    }
    
    // For small constraints, we can try all subsets of upgradeable edges
    vector<Edge> upgradeEdges;
    for (auto& e : edges) {
        if (!e.reliable) {
            upgradeEdges.push_back(e);
        }
    }
    
    int k = upgradeEdges.size();
    long long minCost = INF;
    
    // Try all subsets of edges to upgrade
    for (int mask = 0; mask < (1 << k); mask++) {
        long long cost = 0;
        vector<vector<pair<int, long long>>> tempAdj = adj;
        
        // Add upgraded edges
        for (int i = 0; i < k; i++) {
            if (mask & (1 << i)) {
                tempAdj[upgradeEdges[i].u].push_back({upgradeEdges[i].v, 1});
                tempAdj[upgradeEdges[i].v].push_back({upgradeEdges[i].u, 1});
                cost += upgradeEdges[i].cost;
            }
        }
        
        // Check 2-edge-connectivity on evacuation cities
        vector<int> disc(n+1, -1), low(n+1, -1);
        vector<bool> vis(n+1, false);
        int timer = 0;
        bool valid = true;
        
        function<void(int, int)> dfs2 = [&](int u, int parent) {
            vis[u] = true;
            disc[u] = low[u] = timer++;
            
            for (auto& [v, w] : tempAdj[u]) {
                if (v == parent) continue;
                if (vis[v]) {
                    low[u] = min(low[u], disc[v]);
                } else {
                    dfs2(v, u);
                    low[u] = min(low[u], low[v]);
                    if (low[v] > disc[u]) {
                        // Bridge found
                        if (inS[u] && inS[v]) {
                            valid = false;
                            return;
                        }
                    }
                }
            }
        };
        
        // Reset visited for new check
        fill(vis.begin(), vis.end(), false);
        valid = true;
        
        if (start != -1) dfs2(start, -1);
        
        // Check if all evacuation cities are in the same component
        fill(vis.begin(), vis.end(), false);
        if (start != -1) {
            function<void(int)> dfs3 = [&](int u) {
                vis[u] = true;
                for (auto& [v, w] : tempAdj[u]) {
                    if (!vis[v]) dfs3(v);
                }
            };
            dfs3(start);
        }
        
        for (int i = 0; i < s; i++) {
            if (!vis[evacuation[i]]) {
                valid = false;
                break;
            }
        }
        
        if (valid) {
            minCost = min(minCost, cost);
        }
    }
    
    if (minCost == INF) {
        cout << -1 << "\n";
    } else {
        cout << minCost << "\n";
    }
    
    return 0;
}