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
        for(int i=0;2*i<n;i++)
        {
            for(int j=1;j<size(str);j++)
            {
                if(str[j]==str[j-1])
                {
                    str.erase(j-1,2);
                }
            }
        }
        if(size(str)==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}