#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> vec(n);
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        bool check=false;
        for(int i=0;i<n;i++)
        {
            int diff;
            if(vec[i]%k==0)
            {
                check=true;
                break;
            }
            else if(vec[i]>k)
            {
                diff=vec[i]/k;
                diff++;
                diff*=k;
                diff-=vec[i];
            }
            else
            {
                diff=k-vec[i];
            }
            mini=min(mini,diff);
            // cout<<"diff is "<<diff<<endl;
            // cout<<"mini is "<<mini<<endl;
        }
        if(check)
        cout<<0<<endl;
        else 
        cout<<mini<<endl;   
    }
}