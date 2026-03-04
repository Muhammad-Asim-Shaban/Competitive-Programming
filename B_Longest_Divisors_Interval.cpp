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
        if(n==1||n==2)
        {
            cout<<n<<endl;
            continue;
        }
        int count=0;
        int ans=0;
        for(ll i=1;i<=(n/2);i++)
        {
            if(n%i==0)
            {
                count++;
            }
            else 
            {
                break;
            }
        }
        cout<<count<<endl;
        // ans=max(ans,count);
        // cout<<ans<<endl;
    }
}