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
        if(n%2==0)
        {
            int el=vec[0];
            for(int i=1;i<n;i++)
            {
                el=el^vec[i];
            }
            if(el==0)
            {
                cout<<el<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            int x=vec[0];
            for(int i=1;i<n;i++)
            {
                x=x^vec[i];
            }
            cout<<x<<endl;
        }
    }
}