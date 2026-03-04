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
        vector<vector<int>>vec(n,vector<int>(n));
        int c=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                vec[i][j]=c;
                c++;
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=vec[i][j];
                if(i-1>=0)
                sum+=vec[i-1][j];
                if(i+1<n)
                sum+=vec[i+1][j];
                if(j+1<n)
                sum+=vec[i][j+1];
                if(j-1>=0)
                sum+=vec[i][j-1];
                maxi=max(sum,maxi);
                sum=0;
            }

        }
        cout<<maxi<<endl;
    }
}