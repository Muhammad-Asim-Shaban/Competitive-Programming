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
        for(int i=0;i<n;i++)
        {
            int s=i+1;
            int m=n+2*i+1;
            int l=n+2*i+2;
            cout<<s<< " ";
            cout<<m<<" "<<l;
            if(i<n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}