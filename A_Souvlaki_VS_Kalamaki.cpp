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
        int it=1;
        bool check=false;
        for(int i=0;i<n-1;i++)
        {
            if((it%2==0)&&(vec[i]<=vec[i+1]))
            {
                it++;
                continue;
            }
            else if((it%2==0)&&(vec[i]>vec[i+1]))
            {
                check=true;
                break;
            }
            else if((it%2!=0)&&(vec[i]<=vec[i+1]))
            {
                check=true;
                break;
            }
            else if((it%2!=0)&&(vec[i]>vec[i+1]))
            {
                it++;
                continue;
            }
            
        }
        if(check)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}