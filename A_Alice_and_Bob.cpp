#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n>>a;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        if(a<=vec[0])
        {
            // cout<<"if runs"<<endl;
            cout<<a+1<<endl;
        }
        else if(a>=vec[n-1])
        {
            // cout<<"else if runs"<<endl;
            cout<<a-1<<endl;
        }
        else
        {
            // cout<<"else runs"<<endl;
            vector<int> diff(n);
            int minus=0;
            int plus=0;
            for(int i=0;i<n;i++)
            {
                diff[i]=a-vec[i];
                if(diff[i]<0)
                {
                    minus++;
                }
                else
                {
                    plus++;
                }
            }
            if(minus>plus)
            {
                cout<<a+1<<endl;
            }
            else
            {
                cout<<a-1<<endl;
            }
            
        }
    }
}