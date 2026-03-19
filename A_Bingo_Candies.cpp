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
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int p;
                cin>>p;
                freq[p]++;
            }
        }
        bool check=true;
        int l=n*(n-1);
        for(auto &a:freq)
        {
            if(a.second>l)
            {
                check=false;
                break;
            }
        }
        if(check==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}