#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n+5),b(n+5);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            a[i]=max({a[i],a[i+1],b[i]});
        }
        vector<int> prefix(n+1);
        prefix[0]=0;
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+a[i-1];
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<(prefix[r]-prefix[l-1])<<" ";
        }
        cout<<endl;
    }

}