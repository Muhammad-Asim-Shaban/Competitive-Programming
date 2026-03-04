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
         bool check=false;
        for(int i=1;i<n;i++)
        {
            int p=vec[i];
            int one=0;
            int p1=0;
            int p2=0;
           
            for(int j=0;j<i;j++)
            {
                if(vec[j]<vec[i])
                {
                    one++;
                    p1=j;
                    break;
                }
            }
            for(int j=i+1;j<n;j++)
            {
                if(vec[i]>vec[j])
                {
                    one++;
                    p2=j;
                    break;
                }
            }
            if(one==2)
            {
                cout<<"YES"<<endl;
                cout<<p1+1<<" "<<i+1<<" "<<p2+1<<endl;
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"NO"<<endl;
        }
    }
}