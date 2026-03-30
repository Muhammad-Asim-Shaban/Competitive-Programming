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
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int ans=0;
        int i=n-1;
        while(i>=0&&vec[i]==vec[n-1])
        {
            i--;
        }
        if(i==-1)
        {
            cout<<0<<endl;
            continue;
        }
        while(i>=0)
        {
            i=i-(n-i-1);
            ans++;
            while(i>=0&&vec[i]==vec[n-1])
            {
                i--;
            }
        }
        cout<<ans<<endl;
    }
}