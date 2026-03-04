#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[str[i]]++;
        }
        auto it=m.begin();
        int count=0;
        while(it!=m.end())
        {
            if((it->second)%2!=0)
            {
                count++;
            }
            it++;
        }
        if(count>(k+1))
        {
            cout<<"NO"<<endl;
        }
        else 
        cout<<"YES"<<endl;
    }
}