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
        string ans;
        for(int i=1;i<=n;i++)
        {
            string str;
            cin>>str;
            if(i==1)
            {
                ans+=str;
            }
            else
            {
                if(str+ans < ans+str)
                {
                    ans = str+ans;
                }
                else
                {
                    ans = ans+str;
                }
            }
        }
        cout<<ans<<endl;
    }
}
