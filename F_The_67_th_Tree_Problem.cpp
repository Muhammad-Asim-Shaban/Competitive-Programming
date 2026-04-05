#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    int T=t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(T==2)
        {
            x++;
        }
        ll n=x+y;
        bool ok=true;
        if(y==0) 
        {
            ok=false;
        }
        if(x >n/2) 
        {
            ok=false;
        } 
        if(n%2==0 &&x==0)
        {
            ok=false;
        }
        if(!ok)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        ll ch, ptr;
        if((y-x)%2==1)
        {
            ch=2*x+1;
            ptr=(y-x-1)/2;
        }
        else 
        {
            ch=2*x;
            ptr=(y-x)/2;
        }
        for(ll i=1;i<ch;i++)
        {
            // cout<<"for loop1"<<endl;
            cout<<i<<" "<<i+1<<endl;
        } 
        ll nd=ch+1;
        for(ll i=0;i<ptr;i++)
        {
            // cout<<"for loop2"<<endl;
            cout<<1<<" "<<nd<<endl;
            cout<<1<<" "<<nd+1<<endl;
            nd+=2;
        }
    }
}