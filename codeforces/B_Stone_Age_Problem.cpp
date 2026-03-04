<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,q,x,y,s,k,t=-1,op,a[N],b[N];
int32_t main()
{
cin>>n>>q;
for(int i=1;i<=n;i++)
{
cin>>a[i];
s+=a[i];
}
for(int i=1;i<=q;i++)
{
cin>>op>>x;
if(op==1)
{
cin>>y;
s+=y-(b[x]>t?a[x]:k);
a[x]=y,b[x]=i;
}
else
{
k=x,t=i;
s=n*x;
}
cout<<s<<endl;
}
return 0;
=======
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,q,x,y,s,k,t=-1,op,a[N],b[N];
int32_t main()
{
cin>>n>>q;
for(int i=1;i<=n;i++)
{
cin>>a[i];
s+=a[i];
}
for(int i=1;i<=q;i++)
{
cin>>op>>x;
if(op==1)
{
cin>>y;
s+=y-(b[x]>t?a[x]:k);
a[x]=y,b[x]=i;
}
else
{
k=x,t=i;
s=n*x;
}
cout<<s<<endl;
}
return 0;
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}