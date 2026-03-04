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
        sort(vec.begin(),vec.end());
        bool check=false;
        int el=vec[0];
        for(int i=1;i<n;i++)
        {
            if(vec[i]==el)
            {
                continue;
            }
            else
            {
                check=true;break;
            }
        }
        if(check==true)
        {
            cout<<"YES"<<endl;
            int f=0;
            int l=n-1;
            while(f<=l)
            {
                if(f==l)
                {
                    cout<<vec[f]<<" ";
                    
                    break;
                }
                cout<<vec[f]<<" "<<vec[l]<<" ";
                f++;l--;
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}