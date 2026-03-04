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
        int total=b/(c+1);
        int rem=b%(c+1);
        string s;
        for(int i=1;i<=(c+1);i++)
        {
            for(int i=0;i<total;i++)
            {
                s+='R';
            }
            if(rem>0)
            {
                s+='R';
                rem--;
            }
            if(i!=(c+1))
            {
                s+='B';
            }
        }
        cout<<s<<endl;
    }
}