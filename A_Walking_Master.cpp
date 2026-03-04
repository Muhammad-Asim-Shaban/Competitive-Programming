#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d)
        {
            cout<<-1<<endl;
            continue;
        }
        int diff=d-b;
        b+=diff;
        a+=diff;
        if(a<c)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(a>c)
        {
            int diff2=a-c;
            diff+=diff2;
            cout<<diff<<endl;
        }
        else
        {
            cout<<diff<<endl;
        }
    }
}