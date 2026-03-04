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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            mp[vec[i]]++;
        }
        bool check=true;
        for(auto e:mp)
        {
            int sec=e.second;
            if(sec==1)
            {
                check=false;
                break;
            }
        }
        if(check==false)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int> st(n);
            for(int i=0;i<n;i++)
            {
                st[i]=i+1;
            }
            int l=0,r=0;
            while(r<n)
            {
                if(vec[l]==vec[r])
                {
                    r++;
                }
                else
                {
                    rotate(st.begin()+l,st.begin()+l+1,st.begin()+r);
                    l=r;
                }
            }
            rotate(st.begin()+l,st.begin()+l+1,st.begin()+r);
            for(int i=0;i<n;i++)
            {
                cout<<st[i]<<" ";
            }
            cout<<endl;
        }

    }
}