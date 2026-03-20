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
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        ll gcd1=0,gcd2=0;
        for(ll i=0;i<n;i++)
        {
            if(i&1)
            {
                gcd2=__gcd(gcd2,vec[i]);
            }
            else
            {
                gcd1=__gcd(gcd1,vec[i]);
            }
        }
        bool flag=true;
        for(ll i=1;i<n;i+=2)
        {
            if(vec[i]%gcd1==0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<gcd1<<endl;
            continue;
        }
        flag=true;
        for(ll i=0;i<n;i+=2)
        {
            if(vec[i]%gcd2==0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<gcd2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}