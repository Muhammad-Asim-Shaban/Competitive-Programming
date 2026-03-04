<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> dijkstra(ll v,vector<pair<ll,ll>> adj[],ll s)
{
    vector<ll> dist(v,1e18);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    dist[s]=0;
    pq.push({0,s});
    vector<ll> parent(v,-1);
    while(!pq.empty())
    {
        auto temp=(pq.top());
        ll cost=temp.first;
        ll node=temp.second;
        pq.pop();
        for(auto it:adj[node])
        {
            ll adjNode=it.first;
            ll edgW=it.second;
            if(cost+edgW<dist[adjNode])
            {
                dist[adjNode]=cost+edgW;
                pq.push({dist[adjNode],adjNode});
                parent[adjNode]=node;
            }
        }
    }
    return parent;
}
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<pair<long long,long long>> adj[n];
    while(m--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    vector<long long> parent=dijkstra(n,adj,0);
    if(parent[n-1]==-1)
    {
        cout<<-1<<endl;

    }
    else
    {
        vector<ll> path;
        ll cur=n-1;
        while(cur!=-1)
        {
            path.push_back(cur+1);
            cur=parent[cur];
        }
        reverse(path.begin(),path.end());
        for(int i=0;i<path.size();i++)
        {
            cout<<path[i]<<" ";
        }
        cout<<endl;
    }
    
=======
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> dijkstra(ll v,vector<pair<ll,ll>> adj[],ll s)
{
    set<pair<ll,ll>>st;
    vector<ll> dist(v,1e18);
    dist[s]=0;
    st.insert({0,s});
    while(!st.empty())
    {
        auto it=*(st.begin());
        ll cost=it.first;
        ll node=it.second;
        st.erase(it);
        for(auto it:adj[node])
        {
            ll adjNode=it.first;
            ll edgW=it.second;
            if(cost+edgW<dist[adjNode])
            {
                if(dist[adjNode]!=1e9)
                {
                    st.erase({dist[adjNode],adjNode});
                }
                dist[adjNode]=cost+edgW;
                st.insert({dist[adjNode],adjNode});
            }
        }
    }
    return dist;
}
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<pair<long long,long long>> adj[n];
    while(m--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        adj[a].push_back({b,c});
    }
    vector<long long> dist=dijkstra(n,adj,0);
    for(long long i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}