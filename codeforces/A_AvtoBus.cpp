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
        if(n%2==1||n<4)
        cout<<-1<<endl;
        else
        {
            cout<<(n+4)/6<<" "<<n/4<<endl;
        }
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
        if(n%2==1||n<4)
        cout<<-1<<endl;
        else
        {
            cout<<(n+4)/6<<" "<<n/4<<endl;
        }
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}