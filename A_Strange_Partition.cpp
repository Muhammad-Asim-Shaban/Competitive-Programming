#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long> vec(n);
        long long one=0,two=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(int i=0;i<n;i++)
        {
            two+=ceil(vec[i]*1.0/x);

            one+=vec[i];
        }
        one=ceil(one*1.0/x);
        cout<<one<<" "<<two<<endl;
    }
}
