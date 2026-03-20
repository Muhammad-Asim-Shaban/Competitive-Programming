#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(vector<ll>& vec,ll x)
{
    int n=vec.size();
    vector<ll> b;
    for(ll i=0;i<n;i++)
    {
        if(vec[i]!=x)
        {
            b.push_back(vec[i]);
        }
    }
    int m=b.size();
    for(int i=0;i<m;i++)
    {
        if(b[i]!=b[m-i-1])
        {
            return false;
        }
    }
    return true;
}
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
        bool value=false;
        for(ll i=0;i<n;i++)
        {
            if(vec[i]!=vec[n-i-1])
            {
                if(check(vec,vec[i])||check(vec,vec[n-i-1]))
                {
                    value=true;
                    cout<<"YES"<<endl;
                }
                else
                {
                    value=true;
                    cout<<"NO"<<endl;
                }
                if(value)
                {
                    break;
                }
            }
        }
        if(value==false)
        cout<<"YES"<<endl;
    }
}