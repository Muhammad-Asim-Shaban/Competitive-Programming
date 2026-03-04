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
        vector<int> vec(2*n);
        map<int,int> mp;
        for(int i=0;i<2*n;i++)
        {
            cin>>vec[i];
            mp[vec[i]]++;
        }
        int ans=0;
        int n1=0;
        int n2=0;
        int t=0;
        for(auto &e:mp)
        {
            int f=e.first;
            int s=e.second;
            if(s%2!=0)
            {
                ans++;
                if(t==0)
                {
                    n1++;
                    t=1;
                }
                else
                {
                    n2++;
                    t=0;
                }
            }
            else
            {
                
            }

        }
        cout<<ans<<endl;
    }
}