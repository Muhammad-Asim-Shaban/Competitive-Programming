#include <bits/stdc++.h>
using namespace std;
vector<int> g[10005];
int dist[10005];
bool visited[10005];
//problem 7
int bfs(int start, int n){
    fill(dist,dist+n+1,0);
    fill(visited,visited+n+1,false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    int farthest=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int v:g[u]){
            if(!visited[v]){
                visited[v]=true;
                dist[v]=dist[u]+1;
                farthest=max(farthest,dist[v]);
                q.push(v);
            }   
            // cout<<++ans<<endl;
        }
    }
    return farthest;
}
bool isBipartite(int n){
    vector<int> color(n+1,-1);
    for(int i=1;i<=n;i++){
        if(color[i]==-1){
            queue<int> q;
            q.push(i);
            color[i]=0;
            while(!q.empty()){
                int u=q.front();q.pop();
                for(int v:g[u]){
                    if(color[v]==-1){
                        color[v]=1-color[u];
                        q.push(v);
                    }else if(color[v]==color[u]) return false;
                }
            }
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n,w;cin>>n>>w;
        for(int i=1;i<=n;i++) g[i].clear();
        for(int i=0;i<w;i++){
            int a,b;cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        if(!isBipartite(n))
        {
            cout<<-1<<endl;
            continue;
        }
        bool visitedComp[10005]={};
        int ans=0;
        for(int i=1;i<=n;i++){
            if(!visitedComp[i]){
                queue<int> q;
                q.push(i);
                visitedComp[i]=true;
                vector<int> nodes;
                while(!q.empty()){
                    int u=q.front();q.pop();
                    nodes.push_back(u);
                    for(int v:g[u]){
                        if(!visitedComp[v]){
                            visitedComp[v]=true;
                            q.push(v);
                        }
                    }
                }
                int d1=bfs(nodes[0],n);
                int idx=0;
                for(int u:nodes) if(dist[u]==d1) idx=u;
                int d2=bfs(idx,n);
                ans+=d2+1;
            }
        }
        cout<<ans<<endl;
    }
}
