#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
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
        ll mx=*max_element(vec.begin(),vec.end());
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            int el=max(vec[i],vec[(i+1)%n]);
            // cout<<"element is "<<el<<endl;
            ans+=el;
        }
        ans=ans-mx;
        cout<<ans<<endl;
    }
}