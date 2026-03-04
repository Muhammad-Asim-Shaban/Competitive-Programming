#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    while(n%2==0)
    {
        v.push_back(2);
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1)v.push_back(n);
    return v;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a;
        string str;
        cin>>a;
        cin>>str;
        int turn=0;
        ll m=1;
        vector<ll> factors=primeFactors(a);
        if(str=="Alice")
        turn=1;
        else
        turn=2;
        sort(factors.rbegin(),factors.rend());
        bool check=false;
        for(int i=0;i<factors.size();i++)
        {
            int div=a/m;
            int el=1;
            bool ancheck=false;
            for(int j=0;j<factors.size();j++)
            {
                if(factors[j]<=div)
                {
                    ancheck=true;
                    el=factors[j];
                    break;
                }
            }
            if(ancheck==false)
            {
                check=true;
                break;
            }
            m*=el;
            if(m==a)
            {
                break;
            }
            else if(m>a)
            {
                check=true;
                break;
            }
            if(turn==1)
            turn=2;
            else
            turn=1;
        }
        if(check==true)
        {
            cout<<"tie"<<endl;
        }
        else
        {
            if(turn==1)
            {
                cout<<"Alice"<<endl;
            }
            else
            {
                cout<<"Bob"<<endl;
            }
        }
    }
}
