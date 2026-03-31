#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char> c;
        int k=0;
        int n=s.length();
        for(k=0;k<n;k++)
        {
            if(c.find(s[k])==c.end())
            {
                c.insert(s[k]);
            }
            else
            {
                break;
            }
        }   
        bool check=false;
        for(int i=k;i<n;i++)
        {
            if(s[i]!=s[i-k])
            {
                cout<<"NO"<<endl;
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"YES"<<endl;
        }
    }
}