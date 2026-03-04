#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
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
        int p=vec[n-1]-vec[0];
        for(int i=1;i<n;i++)
        {
            p=max(p,vec[i]-vec[0]);
        }
        for(int i=0;i<n-1;i++)
        {
            p=max(p,vec[n-1]-vec[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            p=max(p,vec[i]-vec[i+1]);
        }
        cout<<p<<endl;
    }
}