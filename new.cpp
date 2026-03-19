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
        for(int i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<n<<endl;
        for(int i=1;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}