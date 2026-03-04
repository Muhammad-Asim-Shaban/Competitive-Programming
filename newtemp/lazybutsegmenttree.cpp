#include <bits/stdc++.h>
#define int long long
//#define INT_MAX LLONG_MAX
using namespace std;
vector <int> arr;
vector <int> seg;
vector <int> lazy;

void push(int i,int l, int r){
	if(lazy[i]!=0){
		seg[i]+=lazy[i];
		if(l!=r){ //not leaf
			lazy[i*2]+=lazy[i];
			lazy[i*2+1]+=lazy[i];
		}
		lazy[i]=0;
	}
}

void build(int i, int l, int r){
	if(l==r){
		seg[i]=arr[l];
		return;
	}
	int mid=(l+r)/2;
	build(i*2,l,mid);
	build(i*2+1,mid+1,r);
	seg[i]=min(seg[i*2],seg[i*2+1]);
}
int query(int i, int l, int r, int ql, int qr){
	push(i,l,r);
	if(ql>r || qr<l) return INT_MAX;
	if(ql<=l && r<=qr) return seg[i];
	int mid=(l+r)/2;
	return min(query(i*2,l,mid,ql,qr),query(i*2+1,mid+1,r,ql,qr));
}
void update(int i,int l,int r,int ind,int val){
	if(l==r){
		seg[i]=val;
		arr[ind]=val;
		return;
	}
	int mid=(l+r)/2;
	if(ind<=mid) update(i*2,l,mid,ind,val);
	else update(i*2+1,mid+1,r,ind,val);
	seg[i]=min(seg[i*2],seg[i*2+1]);
}
void updateRange(int i, int l,int r,int ql, int qr, int val){
	push(i,l,r); // just applying pending update ifany
	if(ql>r || qr<l) return;
	if(ql<=l && qr>=r){
		lazy[i]+=val;
		push(i,l,r);
		return;
	}
	int mid=(l+r)/2;
	updateRange(i*2,l,mid,ql,qr,val);
	updateRange(i*2+1,mid+1,r,ql,qr,val);
	seg[i]=min(seg[i*2],seg[i*2+1]);
}


int32_t main(){
	int n;
	cin>>n;
	arr.resize(n);
	seg.resize(n*4);
	lazy.resize(n*4,0);
	
	for(int i=0;i<n;i++) cin>>arr[i];
	build(1,0,n-1);
	updateRange(1,0,n-1,1,4,10);
	cout<<query(1,0,n-1,2,4);
}