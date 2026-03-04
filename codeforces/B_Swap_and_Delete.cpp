<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
void solve()
{
        string str;
        cin>>str;
        int n=str.length();
        int z=count(str.begin(),str.end(),'0');
        int o=count(str.begin(),str.end(),'1');
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            o--;
            else
            z--;
            if(o<0 || z<0)
            {
                cout<<n-i<<endl;
                return;
            }
        }
        cout<<0<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();

=======
#include<bits/stdc++.h>
using namespace std;
void solve()
{
        string str;
        cin>>str;
        int n=str.length();
        int z=count(str.begin(),str.end(),'0');
        int o=count(str.begin(),str.end(),'1');
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            o--;
            else
            z--;
            if(o<0 || z<0)
            {
                cout<<n-i<<endl;
                return;
            }
        }
        cout<<0<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();

>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}