// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	vector <int> arr(n);
// 	for(int i=0;i<n;i++) cin>>arr[i];
// 	int m;
// 	cin>>m;
// 	int l=0,r=n-1;
// 	while(l<=r){
// 		int mid=(l+r)/2;
// 		if(arr[mid]==m){cout<<"Found";break;}
// 		else if(arr[mid]>m){
// 			r=mid-1;
// 		}
// 		else if(arr[mid]<m){
// 			l=mid+1;
// 		}
// 	}
	
// }



// /////////////upper and lower bounds ////////////////
// #include <bits/stdc++.h>
// using namespace std;
// void lower_bound(int m, vector<int> &arr){
// 	int n=arr.size();
// 	if(m>arr[n-1]) {cout<<"NOT FOUND"<<endl;return;}
// 	int l=0,r=n-1;
// 	while(l<=r){
// 		int mid=(l+r)/2;
// 		if(arr[mid]==m){cout<<m<<endl;break;}
// 		else if(arr[mid]>m) r=mid-1;
// 		else if(arr[mid]<m) l=mid+1;
// 		if(r<l) cout<<arr[l]<<endl;
// 	}
// }
// void upper_bound(int m, vector<int> &arr){
// 	int n=arr.size();
// 	m++;
// 	if(m>arr[n-1]) {cout<<"NOT FOUND"<<endl;return;}
// 	int l=0,r=n-1;
// 	while(l<=r){
// //		cout<<r<<" "<<l<<endl;
// 		int mid=(l+r)/2;
// 		if(arr[mid]==m){cout<<m<<endl;break;}
// 		else if(arr[mid]>m) r=mid-1;
// 		else if(arr[mid]<m) l=mid+1;
// 		if(r<l) {cout<<arr[l]<<endl;break;}
// 	}
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector <int> arr(n);
// 	for(int i=0;i<n;i++) cin>>arr[i];
// 	int m;
// 	cin>>m;
// 	lower_bound(m,arr);
// 	upper_bound(m,arr);
// }


// ////////////// square root ////////////////
// #include <bits/stdc++.h>
// using namespace std;

// int sqqrt(int n){
// 	int l=1;
// 	int r=n;
// 	int ans=0;
// 	while(l<=r){
// 		int mid=(l+r)/2;
// 		if((mid*mid)==n) return mid;
// 		else if((mid*mid)<n) {ans=mid;l=mid+1;}
// 		else r=mid-1;
// 	}
// 	return ans;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<sqqrt(n);
// }

// /////////// sqrt with floating point with precision////////////////
// #include <bits/stdc++.h>
// #define int double
// using namespace std;
// double eps=1e-5;

// int sqqrt(int n){
// 	int l=1;
// 	int r=n;
// 	while(r-l > eps){
// 		int mid=(l+r)/2.0;
// 		if((mid*mid)==n) return mid;
// 		else if((mid*mid)<n) l=mid;
// 		else r=mid;
// 	}
// 	return floor(l*10000+0.5)/10000;
// }

// int32_t main(){
// 	int n;
// 	cin>>n;
// 	cout<<sqqrt(n);
// }



// /////////////////// merging predicate function concept (eko problem on spoj) //////////////////////////////
// #include <bits/stdc++.h>
// using namespace std;
// int n,k;
// vector <int> arr;
// bool isSufficient(int h){
// 	int ans=0;
// 	for(int i=0;i<n;i++){
// 		if(h<=arr[i]) ans+=(arr[i]-h);
// 	}
// 	if(ans>=k) return true;
// 	return false;
// }

// int main(){
// 	cin>>n>>k;
// 	arr.resize(n);
// 	int max=0;
// 	for(int i=0;i<n;i++) {
// 		cin>>arr[i];
// 		if(max<arr[i]) max=arr[i];
// 	}
// 	int l=0,r=max;
// 	while(r-l>1){
// 		int mid=(l+r)/2;
// 		if(isSufficient(mid)){
// 			l=mid;
// 		}
// 		else{
// 			r=mid-1;
// 		}
// 	}
// 	if(isSufficient(l)){
// 		cout<<l<<endl;
// 	}
// 	else if(isSufficient(r)){
// 		cout<<r<<endl;
// 	}
// 	else{
// 		cout<<-1<<endl;
// 	}
// }