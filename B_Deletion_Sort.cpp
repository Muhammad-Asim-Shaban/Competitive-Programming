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
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(vec[i]<vec[i-1])
            {
                ans++;
            }
        }
        cout<<n-ans<<endl;
    }
}