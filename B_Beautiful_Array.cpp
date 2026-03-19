#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll mins=k*b;
        ll maxs=(k*b)+ (n*(k-1));
        if(s<mins || s>maxs)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            vector<ll> ans(n,0);
            ans[0]=mins;
            s-=mins;
            for(ll i=0;i<n;i++)
            {
                ll add= min(k-1,s);
                ans[i]+=add;
                s-=add;
            }
            for(ll i=0;i<n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

    }
}