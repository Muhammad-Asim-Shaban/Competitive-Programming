#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> arr;
vector <ll> seg;
void build(ll i, ll l, ll r){
    if(l==r){
        seg[i]=arr[r];
        return;
    }
    ll mid=(l+r)/2;
    build(i*2,l,mid);
    build(i*2+1,mid+1,r);
    seg[i]=min(seg[i*2],seg[i*2+1]);
}
ll query(ll i, ll l, ll r, ll ql, ll qr){
    if(qr<l || ql>r) return LLONG_MAX;
    if(ql<=l && qr>=r) return seg[i];
    ll mid=(l+r)/2;
    return min(query(i*2,l,mid,ql,qr),query(i*2+1,mid+1,r,ql,qr));
}
void update(ll i, ll l, ll r, ll idx, ll val){
    if(l==r){
        seg[i]=val;
        arr[idx]=val;
        return;
    }
    ll mid=(l+r)/2;
    if(idx<=mid) update(i*2,l,mid,idx,val);
    else update(i*2+1,mid+1,r,idx,val);
    seg[i]=min(seg[i*2],seg[i*2+1]);
}
 
int main(){
    ll n,q;
    cin>>n>>q;
    arr.resize(n);
    seg.resize(n*4);
    for(ll i=0;i<n;i++) cin>>arr[i];
    build(1,0,n-1);
    for(ll i=0;i<q;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==2){
            b--;
            c--;
            cout<<query(1,0,n-1,b,c)<<endl;
        }
        else{
            b--;
            update(1,0,n-1,b,c);
        }
    }
}