#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<vector<long long>> vec;
        vector<long long> small;
        vector<long long> secondsmall;
        long long mini=LONG_LONG_MAX;
        for(long long i=0;i<n;i++)
        {
            vector<long long> newarr;
            long long p;
            cin>>p;
            for(long long j=0;j<p;j++)
            {
                long long value;
                cin>>value;
                newarr.push_back(value);
            }
            sort(newarr.begin(),newarr.end());
            if(newarr[0]<mini)
            {
                mini=newarr[0];
            }
            vec.push_back(newarr);
            small.push_back(newarr[0]);
            secondsmall.push_back(newarr[1]);
        }
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            ans+=vec[i][1];
        }
        sort(small.begin(),small.end());
        sort(secondsmall.begin(),secondsmall.end());
        long long secondsmalltotal=0;
        for(long long i=0;i<secondsmall.size();i++)
        {
            secondsmalltotal+=secondsmall[i];
        }
        ans=secondsmalltotal-secondsmall[0]+small[0];
        cout<<ans<<endl;
    }
}