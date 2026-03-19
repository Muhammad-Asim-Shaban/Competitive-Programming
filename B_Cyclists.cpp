#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        deque<pair<int,int>>dq;
        for(int i=1;i<=n;i++)
        {
            int c;
            cin>>c;
            int check=0;
            if(i==p)
            {
                check=1;
            }
            dq.push_back({c,check});
        }
        int ans=0;
        while(true)
        {
            int pos=-1;
            for(int i=0;i<k && i<dq.size();i++)
            {
                if(pos==-1 || dq[i].first <dq[pos].first)
                {
                    // cout<<"if for"<<endl;
                    pos=i;
                }
            }
            if(m<dq[pos].first)
            {
                // cout<<"break"<<endl;
                break;
            }
            m=m-dq[pos].first;
            auto card=dq[pos];
            dq.erase(dq.begin()+pos);
            dq.push_back(card);
            if(card.second)
            {
                // cout<<"if ans"<<endl;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}