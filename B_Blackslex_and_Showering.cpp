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
        ll s=0;
        for(int i=0;i<n-1;i++)
        {
            // cout<<"running"<<endl;
            s=s+llabs(vec[i]-vec[i+1]);
        }
        // cout<<s<<endl;
        ll f=s;
        for(int i=0;i<n;i++)
        {
            ll curr=s;
            if(i>0)
            {
                curr=curr-llabs(vec[i]-vec[i-1]);
            }
            if(i+1<n)
            {
                curr=curr-llabs(vec[i]-vec[i+1]);
            }
            if(i>0&&i+1<n)
            {
                curr=curr+llabs(vec[i-1]-vec[i+1]);
            }
            f=min(f,curr);
        }
        cout<<f<<endl;

    }
}