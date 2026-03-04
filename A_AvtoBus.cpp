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
        if(n%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        // n++;
        ll one=floor(n/4);
        ll two=ceil(n/6.0);
        // ll two=(n+5)/6;
        cout<<two<<" "<<one<<endl;

    }
}