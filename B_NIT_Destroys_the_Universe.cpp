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
        int cz=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==0)
            cz++;
        }
        int l=0;
        int r=n-1;
        while(l<n&&vec[l]==0)
        l++;
        while(r>=0&&vec[r]==0)
        r--;
        bool check=false;
        for(int i=l;i<=r;i++)
        {
            if(vec[i]==0)
            {
                check=true;
            }
        }
        if(cz==n) cout<<0<<endl;
        else if(check==false) cout<<1<<endl;
        else cout<<2<<endl;
    }
}