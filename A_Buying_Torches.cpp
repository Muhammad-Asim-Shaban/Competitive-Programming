#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,k;
        cin>>x>>y>>k;
        ll need=(y*k)+k-1;
        ll t1=((need-1)/(x-1));
        t1+=k;
        t1++;
        cout<<t1<<endl;
    }
}