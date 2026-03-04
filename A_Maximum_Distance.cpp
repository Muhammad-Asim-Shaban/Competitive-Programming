#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> x(n),y(n);
    for(ll i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>y[i];
    }
    ll maxi=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ll one=x[j]-x[i];
            ll two=y[j]-y[i];
            one*=one;
            two*=two;
            ll ans=one+two;
            maxi=max(maxi,ans);
        }
    }
    cout<<(maxi)<<endl;
}