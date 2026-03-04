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
        int n=s.length();
        int l=0;
        int r=n-1;
        int sl=0;
        int sr=0;
        while(s[l]=='<')
        {
            l++;
            sl++;   
        }
        while(s[r]=='>')
        {
            r--;
            sr++;
        }
        if(s.size()-sl-sr>=2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<s.size()-min(sl,sr)<<endl;
        }
    }
}