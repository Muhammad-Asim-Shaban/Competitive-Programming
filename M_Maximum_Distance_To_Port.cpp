#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> product(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> product[i];

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }   
    }

    vector<int> ans(k + 1, 0);

    for (int i = 1; i <= n; i++) {
        int type = product[i];
        ans[type] = max(ans[type], dist[i]);
    }

    for (int i = 1; i <= k; i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}
