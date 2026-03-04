<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        int sh=INT_MAX;
        int n=str.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]!=' ')
            {
                count++;
            }
            else
            {
                sh=min(sh,count);
                count=0;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(str[i]==' ')
            {
                cout<<sh;
            }
            else
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        int sh=INT_MAX;
        int n=str.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]!=' ')
            {
                count++;
            }
            else
            {
                sh=min(sh,count);
                count=0;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(str[i]==' ')
            {
                cout<<sh;
            }
            else
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}