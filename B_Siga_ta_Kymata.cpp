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
        vector<int> vec(n);
        int it,j;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==1)
            it=i;
            if(vec[i]==n)
            j=i;
        }
        string s;
        cin>>s;
        bool check=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(vec[i]==1||vec[i]==n)
                {
                    check=true;
                    break;
                }
                else if(vec[i]==1&&i==0)
                {
                    check=true;
                    break;
                }
                else if(vec[i]==1&&i==n-1)
                {
                    check=true;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        vector<pair<int,int>> ansb;
        ansb.push_back({it+1,j+1});
        if(check==true)
        {
            cout<<-1<<endl;
        }
        else
        {
            
            int op=1;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    if(i>=it&&i<=j)
                    {
                        continue;
                    }
                    else if(i>=j)
                    {
                        int tl=-1,tr=-1;
                        for(int p=i+1;p<n;p++)
                        {
                            if(vec[p]>vec[i])
                            {
                                tr=p;
                                break;
                            }
                        }
                        for(int p=i-1;p>=0;p--)
                        {
                            if(vec[p]<vec[i])
                            {
                                tl=p;
                                break;
                            }
                        }
                        if(tl!=-1&&tr!=-1)
                        {
                            ansb.push_back({tl,tr});
                        }
                        else
                        {
                            check=true;
                            break;
                        }
                    }
                    else if(i<=it)
                    {
                        int tl=-1,tr=-1;
                        for(int p=i+1;p<n;p++)
                        {
                            if(vec[p]>vec[i])
                            {
                                tr=p;
                                break;
                            }
                        }
                        for(int p=i-1;p>=0;p--)
                        {
                            if(vec[p]<vec[i])
                            {
                                tl=p;
                                break;
                            }
                        }
                        if(tl!=-1&&tr!=-1)
                        {
                            ansb.push_back({tl,tr});
                        }
                        else
                        {
                            check=true;
                            break;
                        }
                    }
                }
            }
        }
        if(check==true)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(ansb.size()>5)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<ansb.size()<<endl;
                for(int ipt=0;ipt<ansb.size();ipt++)
                {
                    cout<<ansb[ipt].first<<" "<<ansb[ipt].second<<endl;;
                }
                cout<<endl;
            }
        }
    }

}