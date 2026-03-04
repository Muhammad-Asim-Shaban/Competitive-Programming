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
        ll cnt=0;
        bool check=false;
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                cnt++;
            }
            else
            {
                if(n%3==0)
                {
                    n*=2;
                    cnt++;
                }
                else
                {
                    cnt=-1;
                    check=true;
                    break;
                }
            }
        }
        if(check)
        cout<<-1<<endl;
        else
        cout<<cnt<<endl;
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
        ll cnt=0;
        bool check=false;
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                cnt++;
            }
            else
            {
                if(n%3==0)
                {
                    n*=2;
                    cnt++;
                }
                else
                {
                    cnt=-1;
                    check=true;
                    break;
                }
            }
        }
        if(check)
        cout<<-1<<endl;
        else
        cout<<cnt<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}