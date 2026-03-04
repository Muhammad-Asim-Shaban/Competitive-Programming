// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int val;
//     Node* left;
//     Node* right;
//     Node(int v):val(v),left(NULL),right(NULL){}
// };

// Node* build(vector<int>&a){
//     if(a.empty())return NULL;
//     int n=a.size();
//     vector<Node*>v(n,NULL);
//     for(int i=0;i<n;i++)if(a[i]>=0)v[i]=new Node(a[i]);
//     for(int i=0,j=1;j<n;i++){
//         if(v[i]){
//             if(j<n)v[i]->left=v[j++];
//             if(j<n)v[i]->right=v[j++];
//         }
//     }
//     return v[0];
// }

// long long ans=0;

// vector<long long> dfs(Node* r){
//     if(!r)return {1,0,LLONG_MAX,LLONG_MIN};
//     auto L=dfs(r->left);
//     auto R=dfs(r->right);
//     if(L[0]&&R[0]&&L[3]<r->val&&r->val<R[2]){
//         long long s=L[1]+R[1]+r->val;
//         ans=max(ans,s);
//         long long mn=min((long long)r->val,L[2]);
//         long long mx=max((long long)r->val,R[3]);
//         return {1,s,mn,mx};
//     }
//     return {0,0,LLONG_MIN,LLONG_MAX};
// }

// int main(){
//     vector<int>a;
//     int x;
//     while(cin>>x)a.push_back(x);
//     Node* root=build(a);
//     dfs(root);
//     cout<<ans;
// }

