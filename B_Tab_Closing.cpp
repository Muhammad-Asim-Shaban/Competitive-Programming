#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    int cbc=1;
    bool check=(a/n)>=b;
    int count=1;
    bool bigger=check;
    if((a/1)<b&&check) count+=1;
    else if((a/1)>b&&!bigger) count+=1;
    cout<<count<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    
    
}