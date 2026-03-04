#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int op=0;
        int p=0;
        bool check=false;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        while(true)
        {
            if(p==10)
            {
                check=true;
                // cout<<"check is true"<<endl;
                break;
            }
            if((n%6)==0)
            {
                n/=6;
                op++;
                p=0;
            }
            else
            {
                p++;
                op++;
                n*=2;
            }
            if(n==1)
            {
                break;
            }
        }
        if(check==false)
        cout<<op<<endl;
        else 
        cout<<-1<<endl;
    }
}