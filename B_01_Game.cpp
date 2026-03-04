#include<bits/stdc++.h>
using namespace std;
int f(string str)
{
    string p=str;
    int n=p.length();
    int one=0,two=0;
    int op=1;
    while(n>=2)
    {
        bool check=false;
        for(int i=1;i<n;i++)
        {
            if(p[i]!=p[i-1])
            {
                one=i-1;two=i;
                check=true;
                break;
            }
        }
        if(check==true)
        {
            string ne;
            if(op==1) op=2;
            else op=1;
            for(int i=0;i<n;i++)
            {
                if(i==one||i==two) continue;
                else ne.push_back(p[i]);
            }
            p=ne;
            n=p.length();
            continue;
        }
        else
        {
            return op;
        }
    }
    return op;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        int ans=f(str);
        if(ans==2)
        {
            cout<<"DA"<<endl;
        }
        else
        {
            cout<<"NET"<<endl;
        }
    }
}