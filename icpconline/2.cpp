#include <bits/stdc++.h>
using namespace std;

const int MAXX=21;
int dp[1<<MAXX];
vector<int> sortedvec;
vector<pair<char, string>> actions;
int M;
int pres=1e9;
int nres=-1e9;

int solve(int mask, int idx){
    if(idx==M) return 0;
    if(dp[mask] != -1) return dp[mask];

    char eng=actions[idx].first;
    string action=actions[idx].second;
    int result;

    if(action=="pick")
    {
        if(eng=='A')    
        {
            result=nres;
            for (int i=0; i < M; i++){
                    if(!(mask & (1<<i))){
                    int mask2=mask | (1<<i);
                    int val=sortedvec[i];
                    result=max(result, val + solve(mask2, idx + 1));
                }
            }
        }
        else
        {
            result=pres;
            for (int i=0; i < M; i++)
            {
                if(!(mask & (1<<i)))
                {
                    int mask2=mask | (1<<i);
                    int val=sortedvec[i];
                    result=min(result, -val + solve(mask2, idx + 1));
                }
            }
        }
    }
    else {
        if(eng=='A')
        {
            result=nres;
            for (int i=0; i < M; i++){
                if(!(mask & (1<<i))){
                    int mask2=mask | (1<<i);
                    result=max(result, solve(mask2, idx + 1));
                }
            }
        }
        else {
            result=pres;
            for (int i=0; i < M; i++){
                if(!(mask & (1<<i))){
                    int mask2=mask | (1<<i);
                    result=min(result, solve(mask2, idx + 1));
                }
            }
        }
    }

    return dp[mask]=result;
}

int main(){
    int N;
    cin>>N;

    vector<int> vec(N);
    for (int i=0; i < N; i++){
        cin>>vec[i];
    }

    cin>>M;
    actions.resize(M);
    for (int i=0; i < M; i++){
        cin>>actions[i].first>>actions[i].second;
    }

    sort(vec.rbegin(), vec.rend());
    sortedvec=vector<int>(vec.begin(), vec.begin() + min(N, M));

    memset(dp, -1, sizeof(dp));
    int diff=solve(0, 0);

    if(diff > 0) cout<<"A "<<diff<<endl;
    else cout<<"B "<<-diff<<endl;
}