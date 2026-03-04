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
        int n,k,x;
        cin>>n>>k>>x;
        if(n==1&&k==1&&x==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(k==1&&x==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
            continue;
        }
        else if(k>2)
        {
            cout<<"YES"<<endl;
            if(n%2==0)
            {
                cout<<(n/2)<<endl;
                for(int i=1;i<=(n/2);i++)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else
            {
                vector<int> ans;
                ans.push_back(3);
                n-=3;
                while(n!=0)
                {
                    ans.push_back(2);
                    n-=2;
                }
                cout<<ans.size()<<endl;
                for(int i=0;i<ans.size();i++)
                {
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            if(n%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<(n/2)<<endl;
                for(int i=1;i<=(n/2);i++)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
    }
}