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
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            mp[vec[i]]++;
        }
        int maxi=INT_MIN;
        auto it=mp.begin();
        while(it!=mp.end())
        {
            auto p=it;
            p++;
            if(p==mp.end())
            {
                maxi=(*it).second;
            }
            it++;
        }
        cout<<maxi<<endl;
    }
}