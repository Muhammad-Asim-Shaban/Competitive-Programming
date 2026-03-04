#include<bits/stdc++.h>
using namespace std;
pair<int,int> f(string s)
{
    int one=0,two=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='b')
        {
            if(s[i-1]=='a')
            {
                one++;
            }
        }
        else if(s[i]=='a')
        {
            if(s[i-1]=='b')
            {
                two++;
            }
        }
    }
    return {one,two};
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]==s[s.length()-1])
        {
            cout<<s<<endl;
        }
        else
        {
            s[s.length()-1]=s[0];
            cout<<s<<endl;
        }

    }
}