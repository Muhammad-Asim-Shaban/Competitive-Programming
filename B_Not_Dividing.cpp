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
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==1)
            vec[i]++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(vec[i+1]%vec[i]==0)
            {
                vec[i+1]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }

}