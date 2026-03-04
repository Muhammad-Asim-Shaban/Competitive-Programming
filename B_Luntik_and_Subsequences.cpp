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
        ll z=0,o=0;
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==0)
            {
                z++;
            }
            else if(vec[i]==1)
            {
                o++;
            }
        }
        ll ans=pow(2,z)*o;
        cout<<ans<<endl;
    }
}