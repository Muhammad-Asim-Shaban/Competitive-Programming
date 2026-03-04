// #include <bits/stdc++.h>
// using namespace std;
// priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
// vector <int> dist;
// void dijikstra(int start, vector<vector<pair<int,int>>> &list){
// 	pq.push({0,start});
// 	dist[start]=0;
// 	while(!pq.empty()){
// 		pair<int,int> front = pq.top();
// 		pq.pop();
// 		int crr_dist=front.first;
// 		int crr_ele=front.second;
// 		if(dist[crr_ele]!=crr_dist) continue;
// 		for(pair<int,int> nei:list[crr_ele]){
// 			int nei_dist=nei.first;
// 			int nei_ele=nei.second;
// 			if(dist[nei_ele]>crr_dist+nei_dist){
// 				dist[nei_ele]=crr_dist+nei_dist;
// 				pq.push({dist[nei_ele],nei_ele});
// 			}
// 		}
// 	}
// }
// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	vector <vector<pair<int,int>>> list(n);
// 	dist.resize(n,INT_MAX);
// 	for(int i=0;i<m;i++){
// 		int s,d,w;
// 		cin>>s>>d>>w;
// 		list[s].push_back({w,d});
// 	}
// //	for(int i=0;i<=n;i++){
// //		cout<<i<<"-> ";
// //		for(int j=0;j<list[i].size();j++){
// //			cout<<list[i][j].first<<" "<<list[i][j].second<<", ";
// //		}
// //		cout<<endl;
// //	}
// 	dijikstra(0,list);
// 	for(int i=0;i<n;i++) cout<<dist[i]<<" ";
// }


// 4 5
// 0 1 100
// 1 2 100
// 2 0 100
// 1 3 600
// 2 3 200