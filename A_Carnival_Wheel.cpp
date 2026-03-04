#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,a,b;
        cin>>l>>a>>b;
        int maxi=INT_MIN;
        for(int i=1;i<=5000;i++)
        {
            int p=(a+(i*b))%l;
            maxi=max(maxi,p);
        }
        cout<<maxi<<endl;
    }
}