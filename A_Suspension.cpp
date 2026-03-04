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
        int y,r;
        cin>>y>>r;
        int ans=0;
        ans+=r;

        ans = ans+(y/2);
        if(ans>n)
        cout<<n<<endl;
        else
        cout<<ans<<endl;
    }
}