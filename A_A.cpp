#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        vector<int> ans(m,0);
        for(int i=0;i<n;i++)
        {
            int p=vec[i]%m;
            ans[p]++;
        }
        int fans=0;
        if(ans[0] > 0)
        {
            fans++;
        }
        int it=(m-1)/2;
        for(int i=1;i<=it;i++)
        {
            int nx=ans[i];
            int y=ans[m-i];
            if(nx==0&&y==0)
            {
                continue;
            }
            if(nx==0||y==0)
            {
                int maxi=max(nx,y);
                fans=fans + maxi;
            }
            else
            {
                int diff=abs(nx-y);
                int maxi=max(0,diff);
                fans= fans +maxi + 1;
            }
        }
        if(m%2==0)
        {
            if(ans[m/2]>0)
            {
                fans++;
            }
        }
        cout<<fans<<endl;


    }
}