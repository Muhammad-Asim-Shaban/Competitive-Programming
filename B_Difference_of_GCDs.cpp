#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> ans;
        bool check=false;
        for(ll i=1;i<=n;i++)
        {
            ll temp=((l+i-1)/i)*i;
            ans.push_back(temp);
            if(temp>r)
            {
                cout<<"NO"<<endl;
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"YES"<<endl;
            for(int it: ans)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}