#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int cnt=0;
        bool check=false;
        int ans=0;
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                ans++;
                cnt=0;
            }
            else
            {
                n*=2;
                ans++;
                cnt++;
            }
            if(cnt==10)
            {
                check=true;
                break;
            }
        }
        if(check)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}