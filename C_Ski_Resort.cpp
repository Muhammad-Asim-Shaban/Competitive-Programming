#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,q,k;
        cin>>n>>k>>q;
        vector<long long> vec(n);
        for(long long i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(long long i=0;i<n;i++)
        {
            if(vec[i]<=q)
            {
                vec[i]=1;
            }
            else
            {
                vec[i]=0;
            }
        }
        long long ans=0;
        long long count=0;
        for(long long i=0;i<n;i++)
        {
            if(vec[i]==1)
            {
                count++;
            }
            else
            {
                if(count>=k)
                {
                    long long total=count-k+1;
                    ans+=(total*(total+1))/2;
                }
                count=0;
            }
            // count=0;
        }
         if(count>=k)
        {
            // cout<<"goes"<<endl;
            long long total=count-k+1;
            ans+=(total*(total+1))/2;
        }
        cout<<ans<<endl;
    }
}