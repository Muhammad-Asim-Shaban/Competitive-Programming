<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=q;i++)
    {
        ll l,r;
        cin>>l>>r;
        --r;
        ll sum=0;
        if(l==r)
        {
            cout<<arr[l]<<endl;
            continue;
        }
        else
        {
            for(int j=l;j<=r;j++)
            {
                sum+=arr[j];
            }
        }
        cout<<sum<<endl;
    }
    
=======
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=q;i++)
    {
        ll l,r;
        cin>>l>>r;
        --r;
        ll sum=0;
        if(l==r)
        {
            cout<<arr[l]<<endl;
            continue;
        }
        else
        {
            for(int j=l;j<=r;j++)
            {
                sum+=arr[j];
            }
        }
        cout<<sum<<endl;
    }
    
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}