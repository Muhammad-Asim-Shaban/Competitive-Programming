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
        if(is_sorted(vec.begin(),vec.end()))
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}