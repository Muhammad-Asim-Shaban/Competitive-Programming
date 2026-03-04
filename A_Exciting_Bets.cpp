#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll op=0;
        ll diff=abs(a-b);
        ll one=b%diff;
        ll two=diff-(b%diff);
        ll m=min(one,two);
        cout<<diff<<" "<<m<<endl;
    }   
}