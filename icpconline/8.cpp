#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> ess(n),dr(n);
    for(int i = 0; i < n; i++) cin>>ess[i];
    for(int i = 0; i < n; i++) cin>>dr[i];
    long long total = 0;
    for(int i = 0;i < n;i++) total +=ess[i]-dr[i];
    if(total < 0){
        cout << -1;
        return 0;
    }
    long long cur = 0;
    int start = 0;
    for(int i=0;i < n;i++)
    {
        cur += ess[i] - dr[i];
        if(cur<0){
            cur=0;
            start=i+1;
        }
    }
    cout<<(start<n?start+1:-1);
    return 0;
}
