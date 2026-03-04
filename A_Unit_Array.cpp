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
        int one=0,mone=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]<0)
            {
                mone++;
            }
            else one++;
        }
        if(n%2==0)
        {
            if(mone%2==0&&one!=0)cout<<0<<endl;
            else
            {
                int op=0;
                while(one!=mone)
                {
                    one++;
                    mone--;
                    op++;
                }
                cout<<op<<endl;
            }
        }
        else
        {
            if(one>mone) cout<<0<<endl;
            else
            {
                int op=0;
                while(one<=mone)
                {
                    one++;
                    mone--;
                    op++;
                }
                cout<<op<<endl;
            }
        }
    }
}