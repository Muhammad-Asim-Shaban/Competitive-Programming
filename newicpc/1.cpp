#include<bits/stdc++.h>
using namespace std;

int countTriangles(int n, const vector<vector<int>>& adj) {
    vector<unordered_set<int>> adjSet(n);
    for (int u = 0; u < n; ++u) {
        for (int v : adj[u]) {
            adjSet[u].insert(v);
        }
    }

    int triangleCount = 0;

    for (int u = 0; u < n; ++u) {
        for (int v : adj[u]) {
            if (u < v) {
                for (int w : adj[u]) {
                    if (w != v && adjSet[v].count(w)) {
                        triangleCount++;
                    }
                }
            }
        }
    }

    return triangleCount / 3;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int totalTriangles = countTriangles(n, adj);
    cout << totalTriangles << endl;

    return 0;
}
