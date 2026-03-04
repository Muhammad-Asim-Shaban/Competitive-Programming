#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long> vec(n*k);
        for(long long i=0;i<n*k;i++)
        {
            cin>>vec[i];
        }
        int p=n*k;
        long long ans=0;
        while(k--)
        {
            p=p-(n/2+1);
            ans+=vec[p];
        }  
        cout<<ans<<endl;
    }
}