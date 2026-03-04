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
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll g=abs(a-b);
        ll m=min(a%g,g-a%g);
        cout<<g<<" "<<m<<endl;
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
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll g=abs(a-b);
        ll m=min(a%g,g-a%g);
        cout<<g<<" "<<m<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}