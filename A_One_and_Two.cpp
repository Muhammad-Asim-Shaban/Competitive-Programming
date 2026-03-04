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
        vector<int> vec(n);
        int two=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==2)
            two++;
        }
        int ans=-1;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==2)
            {
                ct++;
            }
            if(ct==(two-ct))
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}