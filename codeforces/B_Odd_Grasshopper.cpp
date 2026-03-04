<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
int  t;
cin>>t;
while(t--)
{
 long long x,n;
cin>>x>>n;
long long  i;
for(i=n-n%4+1;i<=n;i++)
{
if(x%2==0) x-=i;
else x+=i;
}
cout<<x<<endl;
}
return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
int  t;
cin>>t;
while(t--)
{
 long long x,n;
cin>>x>>n;
long long  i;
for(i=n-n%4+1;i<=n;i++)
{
if(x%2==0) x-=i;
else x+=i;
}
cout<<x<<endl;
}
return 0;
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}