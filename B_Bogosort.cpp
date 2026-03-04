#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> vec(n);
		set<ll> st;
		for(ll i=0;i<n;i++)
		{
			cin>>vec[i];
			st.insert(vec[i]);
		}
		sort(vec.begin(),vec.end(),greater<ll>());
		for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
		cout<<endl;
	}
}