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
        int one=-1,two=-1;
        int mini=INT_MAX;
        bool check=false;
        for(int i=1;i<n;i++)
        {
            int p=vec[i]-vec[i-1];
            if(p<0)
            {
                check=true;
                break;
            }
            if(p<mini)
            {
                mini=p;
                one=i-1;
                two=i;
            }
        }
        if(check) 
        {
            cout<<0<<endl;
            continue;
        }
        int op=(vec[two]-vec[one])/2;
        op++;
        // while(vec[one]<=vec[two])
        // {
        //     vec[one]++;
        //     op++;
        //     vec[two]--;
        // }
        cout<<op<<endl;
    }
}