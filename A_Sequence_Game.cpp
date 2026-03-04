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
        bool check=false;
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]<0)
            check=true;
        }
        ll x;
        cin>>x;
        // ll l=-1e18,r=1e18;
        // for(ll i=0;i+1<n;i++)
        // {
        //     ll le=min(vec[i],vec[i+1]);
        //     ll re=max(vec[i],vec[i+1]);
        //     // cout<<"le is "<<le<<" re is "<<re<<endl;
        //     l=max(l,le);
        //     r=min(re,r);
        //     if(l>r)
        //     break;
        // }
        // if(l<=x&&x<=r)cout<<"YES"<<endl;
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
        sort(vec.begin(),vec.end());
        if(x<vec[0]||x>vec[n-1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}