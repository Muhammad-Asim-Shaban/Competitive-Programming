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
        string s,r;
        cin>>s>>r;
        int n=s.size();
        int m=r.size();
        vector<ll> a(26,0);
        for(ll i=0;i<r.size();i++)
        {
            a[r[i]-'A']++;
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[s[i]-'A']>0)
            {
                a[s[i]-'A']--;

            }
            else
            {
                s[i]='.';
            }
        }
        string finalanswer="";
        for(ll i=0;i<n;i++)
        {
            if(s[i]!='.')
            {
                finalanswer+=s[i];
            }
        }
        if(finalanswer==r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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
        string s,r;
        cin>>s>>r;
        int n=s.size();
        int m=r.size();
        vector<ll> a(26,0);
        for(ll i=0;i<r.size();i++)
        {
            a[r[i]-'A']++;
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[s[i]-'A']>0)
            {
                a[s[i]-'A']--;

            }
            else
            {
                s[i]='.';
            }
        }
        string finalanswer="";
        for(ll i=0;i<n;i++)
        {
            if(s[i]!='.')
            {
                finalanswer+=s[i];
            }
        }
        if(finalanswer==r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}