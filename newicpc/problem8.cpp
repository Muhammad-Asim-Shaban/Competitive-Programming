#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,R,E;
    long long T;
    while(cin>>N>>R>>E>>T){
        vector<vector<pair<int,int>>> g(N+1);
        for(int i=0;i<R;i++){
            int u,v,d;
            cin>>u>>v>>d;
            g[u].push_back({v,d});
            g[v].push_back({u,d});
        }
        const long long INF=2147483647;
        vector<long long> dist(N+1,INF);

        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
        dist[1]=0;
        pq.push({0,1});
        while(!pq.empty()) {
            auto [cd,u]=pq.top(); pq.pop();
            if(cd!=dist[u]) continue;
            for(auto &x:g[u]){
                int v=x.first,w=x.second;
                if(dist[v]>cd+w){
                    dist[v]=cd+w;
                    // cout<<cd<<endl;
                    pq.push({dist[v],v});
                }
            }
        }
        long long ans=dist[E];
        if(ans>=INF) ans=INF;

        long long t=T;
        vector<int> primes;
        vector<bool> isprime(t,true);
        if(t>1){
            isprime[0]=false;
            isprime[1]=false;
            for(long long i=2;i*i<t;i++){
                if(isprime[i]){
                    for(long long j=i*i;j<t;j+=i) isprime[j]=false;
                }
            }
            for(long long i=2;i<t;i++) if(isprime[i]) primes.push_back(i);
        }
        long long code=0;
        int k=primes.size();
        if(k>=3) code=primes[k-1]+primes[k-2]+primes[k-3];
        else{
            for(int i=0;i<k;i++) code+=primes[i];
        }

        cout<<ans<<" "<<code;
        if(!cin.eof()) cout<<"\n";
    }
}
