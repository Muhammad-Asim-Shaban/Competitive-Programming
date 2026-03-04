#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll c=a;
        ll d=b;
        while(c%2==0)
        {
            c/=2;
        }
        while(d%2==0)
        {
            d/=2;
        }
        if(c!=d)
        {
            cout<<-1<<endl;
        }
        else
        {
            a=a/c;
            b=b/d;
            a=log2(a);
            b=log2(b);
            ll ans=ceil(abs(a-b)/3.0);
            cout<<ans<<endl;
        }
    }
}