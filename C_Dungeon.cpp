#include<bits/stdc++.h>
using namespace std;
// #define int  long long
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        int  n,m;
        cin>>n>>m;
        vector<int > a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int > b(m),c(m);
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>c[i];
        }
        sort(a.begin(),a.end());
        vector<pair<int ,int >> vec(m);
        for(int i=0;i<m;i++)
        {
            vec[i].first=b[i];
            vec[i].second=c[i];
        }
        sort(vec.begin(),vec.end(),[](const pair<int,int>& x, const pair<int,int>& y){
    if (x.first != y.first) return x.first < y.first; 
    return x.second > y.second;});
        // cout<<"vec is "<<endl;
        // for(int i=0;i<m;i++)
        // {
        //     cout<<vec[i].first<<" "<<vec[i].second<<endl;
        // }
        priority_queue<int> pq;
        int tempidx=0;

        multiset<int> cpc(a.begin(),a.end());
        int temp=0;
        // for(int i=0;i<m;i++)
        // {
        //     int one=vec[i].first;
        //     int sec=vec[i].second;
        //     auto it=cpc.lower_bound(one);
        //     // cout<<"one is "<<one<<endl;
        //     // cout<<"sec is "<<sec<<endl;
        //     if(it==cpc.end())
        //     {
        //         // cout<<"if continue is runned"<<endl;
        //         continue;
        //     }
        //     int pt=*it;
        //     cpc.erase(it);
        //     // cout<<"erasing the pt "<<pt<<endl;
        //     temp++;
        //     if(sec>0)
        //     {
        //         // cout<<"pt is "<<pt<<" sec is "<<sec<<endl;
        //         cpc.insert(max(pt,sec));
        //     }   
        // }
        // cout<<temp<<endl;
        while(!cpc.empty())
        {
            int t=*cpc.begin();
            cpc.erase(cpc.begin());
            while(tempidx<m&&vec[tempidx].first<=t)
            {
                pq.push(vec[tempidx].second);
                tempidx++;  
            }
            if(pq.empty())
            {
                continue;
            }
            int newt=pq.top();pq.pop();
            temp++;
            if(newt>0)
            {
                cpc.insert(max(t,newt));
            }
        }
        cout<<temp<<endl;

    }
}