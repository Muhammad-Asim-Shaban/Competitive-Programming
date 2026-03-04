#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        int xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        int arr1[]={1,-1,-1,1};
        int arr2[]={1,1,-1,-1};
        // int ans=0;
        set<pair<int,int>> st1,st2;
        for(int i=0;i<4;i++)
        {
            st1.insert({xk+arr1[i]*a,yk+arr2[i]*b});
            st1.insert({xk+arr1[i]*b,yk+arr2[i]*a});

            st2.insert({xq+arr1[i]*a,yq+arr2[i]*b});
            st2.insert({xq+arr1[i]*b,yq+arr2[i]*a});
        }
        int ans=0;
        for(auto it:st1)
        {
            if(st2.find(it)!=st2.end())
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}