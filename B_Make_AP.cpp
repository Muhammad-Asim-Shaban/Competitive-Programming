#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        bool answer=false;
        ll newa=2*b-c;
        if(newa/a>0&&newa%a==0)
        {
            answer=true;
        }
        ll newb=(c+a)/2;
        if(newb/b > 0 && newb%b==0 && (c-a)%2==0)
        {
            answer=true;
        }
        ll newc=2*b-a;
        if(newc/c>0&&newc%c==0)
        {
            answer=true;
        }
        if(answer)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
