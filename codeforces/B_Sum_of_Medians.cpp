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
        ll a,b;
        cin>>a>>b;
        vector<ll>vec(a*b);
        for(int i=0;i<a*b;i++) cin>>vec[i];
        ll pointer=a*b;

        ll sum=0;
        while(b--)
        {
            pointer-=(a/2+1);
            sum+=vec[pointer];
        }

        cout<<sum<<endl;
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
        ll a,b;
        cin>>a>>b;
        vector<ll>vec(a*b);
        for(int i=0;i<a*b;i++) cin>>vec[i];
        ll pointer=a*b;

        ll sum=0;
        while(b--)
        {
            pointer-=(a/2+1);
            sum+=vec[pointer];
        }

        cout<<sum<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}