#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        bool check=false;
        if(vec[0]==1)
        {
            cout<<1<<" "<<vec[1]<<endl;
            continue;
        }
        else
        {
            bool found=false;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if((vec[j]%vec[i])%2==0)
                    {
                        cout<<vec[i]<<" "<<vec[j]<<endl;
                        found=true;
                        break;
                    }
                }
                if(found==true)
                break;
            }
            if(found==false)
            {
                cout<<-1<<endl;
            }
        }
    }
}