#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> vec(n,vector<ll>(m));
        ll sum=0;
        //input
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>vec[i][j];
                sum+=vec[i][j];
            }
        }
        // cout<<abs(sum)<<endl;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(i-1>=0&&vec[i-1][j]<0&&(abs(vec[i-1][j])>vec[i][j]))
                {
                    
                }
            }
        }

    }
}