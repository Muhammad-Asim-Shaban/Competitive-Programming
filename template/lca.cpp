#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> up;
vector<vector<long long>> adj;
vector<long long> depth;
vector<long long> vec;   

const long long LOG = 60; 

void dfs(long long v, long long p)
{
    vec[v] = p;          
    for(long long u : adj[v])
    {
        if(u == p) continue;
        depth[u] = depth[v] + 1;
        dfs(u, v);
    }
}

void build(vector<long long>& parent)
{
    long long n = parent.size() - 1; 
    up.assign(LOG, vector<long long>(n + 1, -1));

    for(long long i = 1; i <= n; i++)
        up[0][i] = parent[i];

    for(long long i = 1; i < LOG; i++)
    {
        for(long long j = 1; j <= n; j++)
        {
            long long prev = up[i-1][j];
            if(prev != -1)
                up[i][j] = up[i-1][prev];
            else
                up[i][j] = -1;
        }
    }
}

long long query(long long start, long long k)
{
    long long current = start;
    for(long long i = 0; i < LOG; i++)
    {
        if(k & (1LL << i))
        {
            if(current == -1) break;
            current = up[i][current];
        }
    }
    return current;
}

long long lca(long long a, long long b)
{
    if(depth[a] < depth[b])
        swap(a, b);

    long long diff = depth[a] - depth[b];
    a = query(a, diff);

    if(a == b) return a;

    for(long long i = LOG - 1; i >= 0; i--)
    {
        if(up[i][a] != up[i][b])
        {
            a = up[i][a];
            b = up[i][b];
        }
    }

    return up[0][a];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        long long n, q, r;
        cin >> n >> q >> r;

        adj.assign(n + 1, {});
        depth.assign(n + 1, 0);
        vec.assign(n + 1, -1);
        for(long long i = 1; i <= n - 1; i++)
        {
            long long u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(r, -1);
        build(vec);
        while(q--)
        {
            long long a, b;
            cin >> a >> b;           
            cout << query(a, b) << '\n';
        }
    }

    return 0;
}
