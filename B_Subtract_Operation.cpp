#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> vec(n);
        map<ll,bool> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
            mp[vec[i]]=true;
        }
        bool check=false;
        for(ll i=0;i<n;i++)
        {
            if(mp.find(vec[i]-k)!=mp.end())
            {
                cout<<"YES"<<endl;
                check=true;
                break;
            }
        }
        if(check==false)
        cout<<"NO"<<endl;
    }
}