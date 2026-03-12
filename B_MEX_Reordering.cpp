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
        vector<int> cnt(n+1,0);
        for(auto i: vec)
        {
            cnt[i]++;
        }
        if(cnt[0]==0)
        cout<<"NO"<<endl;
        else if (cnt[1] > 0)
        cout<<"YES"<<endl;
        else
        {
            if(cnt[0]==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}