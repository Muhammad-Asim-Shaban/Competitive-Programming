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
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<ll> counta(2*n+1),countb(2*n+1);
        ll count=1;
        for(ll i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                count++;
            }
            else
            {
                counta[a[i-1]]=max(counta[a[i-1]],count);
                count=1;
            }
        }
        counta[a[n-1]]=max(counta[a[n-1]],count);
        count=1;
         for(ll i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                count++;
            }
            else
            {
                countb[b[i-1]]=max(countb[b[i-1]],count);
                count=1;
            }
        }
        countb[b[n-1]]=max(countb[b[n-1]],count);
        ll ans=-1;
        for(ll i=0;i<=2*n;i++)
        {
            ans=max(ans,counta[i]+countb[i]);
        }
        cout<<ans<<endl;
    }   
}