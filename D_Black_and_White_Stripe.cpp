#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int l=0;
        int r=0;
        int maxi=INT_MIN;
        int templ=0;
        int tempm=0;
        bool check=false;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='B')
            {
                if(check==false)
                {
                    templ=i;
                    check=true;
                }
                tempm++;
            }
            else
            {
                if(tempm>maxi)
                {
                    maxi=tempm;
                    r=i-1;
                    l=templ;
                    templ=0;
                    tempm=0;
                }
            }
        }
        int total=k-maxi;
        int one=0;
        int two=0;
        l--;
        if(total<=0)
        {
            cout<<0<<endl;
            continue;
        }
        while(l>=0)
        {
            if(str[l]=='W')
            {
                one++;
            }
            if(total==one)
            {
                break;
            }
            l--;
        }
        r++;
        while(r<n)
        {
            if(str[r]=='W')
            {
                two++;
            }
            if(total==two)
            {
                break;
            }
            r++;
        }
        // cout<<one<<" "<<two<<endl;
        cout<<max(one,two)<<endl;
        // cout<<l<<" "<<r<<endl;
        // cout<<maxi<<endl;
    }
}