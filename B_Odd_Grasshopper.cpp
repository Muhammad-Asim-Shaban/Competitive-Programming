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
        ll rem=x%4;
        // cout<<"rem is "<<rem<<endl;
        ll it=x-rem;
        ll p=n;
        // cout<<"it value is "<<it<<endl;
        for(ll i=it+1;i<=x;i++)
        {
            // cout<<"running for "<<i<<" and "<<p<<endl;
            if(abs(p)%2==0)
            {
                p-=i;
            }
            else
            {
                p+=i;
            }
        }
        cout<<p<<endl;
    }

}