#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll ans=0;
        ll one=vec[0];
        ll two=vec[vec.size()-1];
        if(one!=-1&&two!=-1)
        {
            ans=llabs(one-two);
        }
        else if(one!=-1&&two==-1)
        {
            
        }
    }
}