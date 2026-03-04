#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int l=0,r=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='<')
            {
                temp++;
            }
            else
            {
                l=max(l,temp);
                temp=0;
            }
        }
        l=max(temp,l);
        temp=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='>')
            {
                temp++;
            }
            else
            {
                r=max(r,temp);
                temp=0;
            }
        }  
        r=max(r,temp); 
        // cout<<"l is "<<l<<" and r is "<<r<<endl;
        cout<<max(l,r)+1<<endl;
    }
}