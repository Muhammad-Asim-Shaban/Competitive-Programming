<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll maximum(vector<ll> &vec)
{
    vector<ll> temp=vec;
    sort(temp.begin(),temp.end());
    return temp.back();
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        vector<ll> vec(a);
        for(int i=0;i<a;i++)
        {
            cin>>vec[i];
        }
        long long total=vec[0];
        for(int i=1;i<a;i++)
        {
            total&=vec[i];
        }
        cout<<total<<endl;
    }
=======
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll maximum(vector<ll> &vec)
{
    vector<ll> temp=vec;
    sort(temp.begin(),temp.end());
    return temp.back();
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        vector<ll> vec(a);
        for(int i=0;i<a;i++)
        {
            cin>>vec[i];
        }
        long long total=vec[0];
        for(int i=1;i<a;i++)
        {
            total&=vec[i];
        }
        cout<<total<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}