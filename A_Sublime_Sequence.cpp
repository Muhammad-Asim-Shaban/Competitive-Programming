<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                ans-=x;
            }
            else
            {
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                ans-=x;
            }
            else
            {
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}