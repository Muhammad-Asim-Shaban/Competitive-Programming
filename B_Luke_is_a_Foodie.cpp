#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        vector<pair<ll,ll>> segments(n);
        for(int i=0;i<n;i++)
        {
            segments[i].first=vec[i]-x;
            segments[i].second=vec[i]+x;
        }
        ll l=segments[0].first;
        ll r=segments[0].second;
        int ans=0;
        for(ll i=1;i<n;i++)
        {
            l=max(l,segments[i].first);
            r=min(r,segments[i].second);
            if(l>r)
            {
                ans++;
                l=segments[i].first;
                r=segments[i].second;
            }
        }
        cout<<ans<<endl;
    }
}