#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--){
        int N;cin>>N;
        long long e1,e2;
        cin>>e1>>e2;

        vector<long long>w1(N),w2(N);
        for(int i=0;i<N;i++)
        cin>>w1[i];
        for(int i=0;i<N;i++)
        cin>>w2[i];

        vector<long long>s1(N-1),s2(N-1);
        for(int i=0;i<N-1;i++)
            cin>>s1[i];
        for(int i=0;i<N-1;i++)
            cin>>s2[i];
        long long x1,x2;
            cin>>x1>>x2;

        long long timeLane1=e1+w1[0];
        long long timeLane2=e2+w2[0];

        for(int station=1;station<N;station++){
            long long newTimeLane1= min(timeLane1+w1[station],timeLane2+s2[station-1]+w1[station]);
            long long newTimeLane2=min(timeLane2+w2[station],timeLane1+s1[station-1]+w2[station]);
            timeLane1=newTimeLane1;
            timeLane2=newTimeLane2;
            // cout<<timeLane2<<endl;
        }
        long long result = min(timeLane1+x1,timeLane2+x2);
        cout<<result<<endl;
    }
    return 0;
}
