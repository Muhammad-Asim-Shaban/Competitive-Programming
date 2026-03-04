#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<int> vec;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            vec.push_back(i);
        }
    }   
    if(n>1)
    vec.push_back(n);
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
        if(i+1!=vec.size())
        {
            cout<<"*";
        }
    }
    
}