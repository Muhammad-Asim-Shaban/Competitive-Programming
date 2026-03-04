#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

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
        int mx=*max_element(vec.begin(),vec.end());
        vector<int> b,c;
        for(int i=0;i<n;i++)
        {
            if(vec[i]!=mx)
            {
                b.push_back(vec[i]);
            }
            else
            {
                c.push_back(vec[i]);
            }
        }
        if(b.size()==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it:b)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it:c)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}