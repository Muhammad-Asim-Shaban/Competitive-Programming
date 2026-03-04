#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
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
		int ans=abs(vec[0]-1);
		for(int i=1;i<n;i++)
		{
			ans=__gcd(ans,abs(vec[i]-(i+1)));
		}
		// vector<int> g(n);
		// for(int i=0;i<n;i++)
		// {
		// 	g[i]=abs(i-vec[i]);
		// }
		// int ans=g[0]+1;
		// for(int i=1;i<n;i++)
		// {
		// 	ans=__gcd(ans,g[i]+1);
		// }
		cout<<ans<<endl;
	}
}