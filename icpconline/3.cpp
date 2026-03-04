#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int from, to, t;
};

const int MAXN = 5005;
vector<pair<int,int>> g[MAXN], rg[MAXN];
vector<int> buf[MAXN], touched;

bool cmp(const Edge &a, const Edge &b) {
    return a.t < b.t;
}

long long intersect(const vector<pair<int,int>> &pre, const vector<pair<int,int>> &post,
                    int mid, int delta, int skip1, int skip2) 
{
    long long ans = 0;
    int pre_lo = mid - delta, pre_hi = mid - 1;

    auto cmp_time = [](const pair<int,int> &p, int val){ return p.second < val; };
    auto it1 = lower_bound(pre.begin(), pre.end(), pre_lo, cmp_time);
    auto it2 = lower_bound(pre.begin(), pre.end(), pre_hi + 1, cmp_time);
    if(it1 == pre.end()) return 0;

    for(auto it = it1; it != it2; ++it){
        int node = it->first;
        int time = it->second;
        if(node == skip1 || node == skip2) continue;
        if(buf[node].empty()) touched.push_back(node);
        buf[node].push_back(time);
    }

    int post_lo = mid + 1, post_hi = mid + delta;
    auto jt1 = lower_bound(post.begin(), post.end(), post_lo, cmp_time);
    auto jt2 = lower_bound(post.begin(), post.end(), post_hi + 1, cmp_time);

    for(auto it = jt1; it != jt2; ++it){
        int node = it->first;
        int time = it->second;
        if(node == skip1 || node == skip2) continue;
        if(!buf[node].empty()){
            const vector<int> &times = buf[node];
            int lim = time - delta;
            auto itv = lower_bound(times.begin(), times.end(), lim);
            ans += distance(itv, times.end());
        }
    }

    for(int node : touched) buf[node].clear();
    touched.clear();
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, delta;
    if(!(cin >> n >> m >> delta)) return 0;

    vector<Edge> edges(m);
    for(int i=0;i<m;++i) cin >> edges[i].from >> edges[i].to >> edges[i].t;

    sort(edges.begin(), edges.end(), cmp);

    for(auto &e : edges)
    {
        g[e.from].push_back({e.to, e.t});
        rg[e.to].push_back({e.from, e.t});
    }

    long long res1=0, res2=0, res3=0;
    for(auto &e : edges){
        int u = e.from, v = e.to, t = e.t;
        res1 += intersect(rg[u], g[v], t, delta, u, v);
        res2 += intersect(g[u], rg[v], t, delta, u, v);
        res3 += intersect(rg[v], g[v], t, delta, u, v);
    }

    cout << res1 << " " << res2 << " " << res3 << endl;
    return 0;
}
