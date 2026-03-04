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
        vector<int> f(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            f[vec[i]]++;
        }
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            if(f[i]>=i)
            {
                
            }
        }
    }
}