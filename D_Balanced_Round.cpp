#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int maxseq=0;
        int temp=0;
        for(int i=1;i<n;i++)
        {
            if(vec[i]-vec[i-1]<=k)
            {
                temp++;
                maxseq=max(temp,maxseq);
            }
            else
            {
                temp=0;
            }

        }
        cout<<n-(maxseq+1)<<endl;
    }
}