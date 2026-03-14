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
        vector<ll> odds;
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]%2!=0)
            {
                odds.push_back(vec[i]);
            }
        }
        sort(odds.begin(),odds.end());
        if(odds.size()==0)
        {
            cout<<0<<endl;
        }
        else
        {
            unsigned long long ans=0;
            int m=odds.size();
            
            ans+=odds[m-1];
            m--;
            for(ll i=0;i<n;i++)
            {
                if(vec[i]%2==0)
                {
                    ans+=vec[i];
                }
            }
            m--;
            int i=0;
            while(i<m)
            {
                // cout<<"while executed"<<endl;
                i++;
                ans+=odds[m];
                m--;
            }
            cout<<ans<<endl;
        }
    }
}