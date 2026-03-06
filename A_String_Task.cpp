#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string ans;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A'||str[i]=='O'||str[i]=='Y'||str[i]=='E'||str[i]=='U'||str[i]=='I'||str[i]=='a'||str[i]=='o'||str[i]=='y'||str[i]=='e'||str[i]=='u'||str[i]=='i')
        {
            continue;
        }
        else
        {
            ans.push_back('.');
            if(str[i]>='A'&&str[i]<='Z')
            {
                char c=str[i];
                c+=32;
                ans.push_back(c);
            }
            else
            {
                ans.push_back(str[i]);
            }
        }
    }
    cout<<ans<<endl;


}