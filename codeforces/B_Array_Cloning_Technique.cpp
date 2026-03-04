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
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        ll highf=0;
        for(auto it:m)
        {
            highf=max(highf,it.second);
        }
        ll operations=0;
        while(highf<n)
        {
            operations++;
            if(highf*2<=n)
            {
                operations+=highf;
                highf*=2;
            }
            else
            {
                operations+=(n-highf);
                highf=n;
            }
        }
        cout<<operations<<endl;
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
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        ll highf=0;
        for(auto it:m)
        {
            highf=max(highf,it.second);
        }
        ll operations=0;
        while(highf<n)
        {
            operations++;
            if(highf*2<=n)
            {
                operations+=highf;
                highf*=2;
            }
            else
            {
                operations+=(n-highf);
                highf=n;
            }
        }
        cout<<operations<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}