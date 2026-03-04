#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b&&a==c)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int d1=a-b;
        int d2=a-c;
        int d3=b-a;
        int d4=b-c;
        int d5=c-a;
        int d6=c-b;
        if(c<=d1)
        {
            if(d1%c==0)
            {
                if(d1!=1&&c!=1)
                {
                    cout<<"YES"<<endl;
                    continue;
                } 
            }
        }
         if(b<=d2)
        {
            if(d2%b==0)
            {
                if(d2!=1&&b!=1)
                {
                    cout<<"YES"<<endl;
                    continue;
                } 
            }
        }
         if(c<=d3)
        {
            if(d3%c==0)
            {
                if(d3!=1&&c!=1)
                {
                    cout<<"YES"<<endl;
                    continue;
                } 
            }
        }
         if(a<=d4)
        {
            if(d4%a==0)
            {
                if(d4!=1&&a!=1)
                {
                    cout<<"YES"<<endl;
                    continue;
                } 
            }
        }
         if(b<=d5)
        {
            if(d5%b==0)
            {
                if(d5!=1&&b!=1)
                {
                    cout<<"YES"<<endl;
                    continue;
                } 
            }
        }
         if(a<=d6)
        {
            if(d6%a==0)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
}