#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(vector<ll>&vec,ll x,ll i,vector<vector<int>>&dp)
{
    if(i<0) return 0;
    if(dp[i][x]!=-1)
    return dp[i][x];
    if(x>=vec[i])
    {
        return dp[i][x]= max(1+f(vec,x-vec[i],i-1,dp),f(vec,x,i-1,dp));
    }
    else
    {
        return dp[i][x]= f(vec,x,i-1,dp);
    }
}
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> vec(n);
    for(ll i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1,-1));
    cout<<f(vec,x,n-1,dp);

}