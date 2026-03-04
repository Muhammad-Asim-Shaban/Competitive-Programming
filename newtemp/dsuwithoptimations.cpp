// #include <bits/stdc++.h>
// using namespace std;

// vector <int> parents;
// vector <int> size; // for optimizations

// void make(int v){
// 	parents[v]=v;
// 	size[v]=1;
// }

// int find(int v){
// 	while(parents[v]!=v){
// 		v=parents[v];
// 	}
// 	return v;
// }
// // path compression find:
// int find(int v){
// 	if(parents[v]==v) return v;
// 	return parents[v] = find(parents[v]);
// }

// void uunion(int a, int b){
// 	int parent_a=find(a);
// 	int parent_b=find(b);
// 	if(parent_a!=parent_b){
// 		// so smaller tree gets union with bigger tree
// 		if(size[parent_a]<size[parent_b]) swap(parent_a,parent_b);
// 		parents[parent_b]=parent_a;
// 		size[parent_a]+=size[parent_b];
// 		// parent(root) node has the total size of a component
// 	}
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	parents.resize(n+1);
// 	size.resize(n+1);
// }