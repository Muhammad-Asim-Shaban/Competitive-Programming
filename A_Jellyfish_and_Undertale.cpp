#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{
    long long  t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> vec(c);
        long long ans=0;
        ans+=b;
        for(int i=0;i<c;i++)
        {
            cin>>vec[i];
            ans=ans+min(vec[i],a-1);
        }
        cout<<ans<<endl;
    }
}