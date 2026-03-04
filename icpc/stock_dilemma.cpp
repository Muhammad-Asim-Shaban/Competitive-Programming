#include<bits/stdc++.h>
using namespace std;
#define ll long long
// vector<ll> vec;
vector<ll>dp(100005,-1);
int f(int i,int b,vector<int>p,int t,vector<vector<vector<int>>> &dp)
    {
        if(t==0) return 0;
        if(i==(p.size())) return 0;
        if(dp[i][b][t]!=-1) return dp[i][b][t];
        if(b)
        {
            return dp[i][b][t]= max(-p[i]+f(i+1,0,p,t,dp),f(i+1,1,p,t,dp));
        }
        return dp[i][b][t]= max(p[i]+f(i+1,1,p,t-1,dp),f(i+1,0,p,t,dp));
    }
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        ll n;
        cin>>n;
        // vec.resize(n);
        vector<int> vec(n);
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        // int n=vec.size();
         vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        cout<<f(0,1,vec,k,dp)<<endl;
    }
}