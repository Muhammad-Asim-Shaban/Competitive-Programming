#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        vector<int> vec(26,0);
        int it=s2.length()-1;
        bool check=false;
        bool check2=false;
        map<int,int> m;
        for(int i=0;i<s2.length();i++)
        {
            int p=s2[i]-65;
            m[p]++;
        }
        for(int i=s1.length()-1;i>=0;i--)
        {
            if(s1[i]==s2[it])
            {
                it--;
                int pt=s1[i]-65;
                // cout<<pt<<endl;
                if((vec[pt]+1)>(m[pt]))
                {
                    check=true;
                    break;
                }
                vec[pt]++;
                if(it<0)
                {
                    check2=true;
                    break;
                }
            }
            else
            {
                int pt=s1[i]-65;
                vec[pt]++;
            }
        }
        if(check==true) 
        {
            cout<<"NO"<<endl;
        }
        else if(check2==true)
        {
            cout<<"YES"<<endl;
        }
        else if(it<0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}