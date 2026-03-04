<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i*=2)
    {
        for(int j=1;j<=n;j*=2)
        {
            //some constant work other than loop
        }
    }
=======
#include<iostream>
using namespace std;
int main()
{
    string sent="aaaab";
    string pattern="aaab";
    if(pattern.length()==0)
    {
        cout<<"Not present inside the sentence"<<endl;
        return 0;
    }
    int it=0;
    for(int i=0;i<sent.length();i++)
    {
        if(sent[i]==pattern[it])
        {
            it++;
        }
        else
        {
            it=0;
            i--;
        }
        if(it==pattern.length())
        {
            cout<<"Present inside the string"<<endl;
            return 0;
        }
    }
    cout<<"Not present inside the sentence"<<endl;

>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}