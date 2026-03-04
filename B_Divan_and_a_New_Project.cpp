#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        vector<pair<ll,ll>> maps;
        for(int i=0;i<n;i++)
        {
            maps.push_back({vec[i],i});
        }
        sort(maps.rbegin(),maps.rend());
        ll minutes=0;
        ll coordinates=1;
        vector<ll> ans(n+1);
        ans[0]=0;
        for(int i=0;i<n;i++)
        {
            ans[maps[i].second+1]=coordinates;
            minutes=minutes+(2*abs(coordinates)*maps[i].first);
            if(coordinates<0)
            {
                coordinates=abs(coordinates)+1;
            }
            else
            {
                coordinates=-coordinates;
            }
        }
        cout<<minutes<<endl;
        for(int i=0;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}