<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n--;
        ll msb=log2(n);
        vector<ll> ans;
        ll num=pow(2,msb)-1;
        while(num>=0)
        {
            ans.push_back(num);
            num--;
        }
        num=pow(2,msb);
        while(num<=n)
        {
            ans.push_back(num);
            num++;
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
=======
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n--;
        ll msb=log2(n);
        vector<ll> ans;
        ll num=pow(2,msb)-1;
        while(num>=0)
        {
            ans.push_back(num);
            num--;
        }
        num=pow(2,msb);
        while(num<=n)
        {
            ans.push_back(num);
            num++;
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}