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
        vector<ll> suffix_sum(n);
        map<ll,ll> index;
        ll sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=vec[i];
            index[sum]=i;
            suffix_sum[i]=sum;
        }
        ll ans=0;
        ll prefix_sum=0;
        for(ll i=0;i<n;i++)
        {
            index.erase(suffix_sum[i]);
            prefix_sum+=vec[i];
            if(index.find(prefix_sum)!=index.end())
            {
                ans=max(ans,(i+1)+(n-index[prefix_sum]));
            }
        }
        cout<<ans<<endl;
    }
}