<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int> ans;
        for(int i=0;i<n;i++) 
        if(str[i]=='0') ans.push_back(i+1);
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;
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
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int> ans;
        for(int i=0;i<n;i++) 
        if(str[i]=='0') ans.push_back(i+1);
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}