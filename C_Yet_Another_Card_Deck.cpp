#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    while(q--)
    {
        int x;
        cin>>x;
        int p=find(vec.begin(),vec.end(),x)-vec.begin();
        cout<<p+1<<" ";
        rotate(vec.begin(),vec.begin()+p,vec.begin()+p+1);
    }
}