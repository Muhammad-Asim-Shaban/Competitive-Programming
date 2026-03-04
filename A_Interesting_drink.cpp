#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>vec(n);
    map<int,int> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>vec[i];
        mp[vec[i]]++;
    }
    ll q;
    cin>>q;
    sort(vec.begin(),vec.end());
    while(q--)
    {
        ll p;
        cin>>p;
        int left=0;
        int right=n-1;
        bool check=false;
        while(left<=right)
        {
            // cout<<"while is running"<<endl;
            int mid=((left)+(right))/2;
             if(vec[mid]>=p)
            {
                if(vec[mid]==p)
                check=true;
                right=mid-1;
            }
            else if(vec[mid]<p)
            {   
                left=mid+1;
            }
        }
        if(check==true)
        {
            int cnt=mp.count(vec[left]);
            cout<<left+cnt<<endl;
        }
        else
        cout<<left<<endl;
    }
}