// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int N; 
// //     cin >> N;

// //     vector<long long> a(N);
// //     for(int i = 0; i < N; i++) cin >> a[i];

// //     int M;
// //     cin >> M;

// //     vector<pair<char,string>> seq(M);
// //     for(int i = 0; i < M; i++) cin >> seq[i].first >> seq[i].second;

// //     sort(a.rbegin(), a.rend()); // highest first
// //     deque<long long> dq(a.begin(), a.end());

// //     long long A = 0, B = 0;

// //     for(auto &e : seq){
// //         char p = e.first;
// //         string act = e.second;

// //         if(act == "pick"){
// //             long long v = dq.front();
// //             dq.pop_front();
// //             if(p == 'A') A += v;
// //             else B += v;
// //         }
// //         else { 
// //             dq.pop_front();
// //         }
// //     }

// //     if(A > B) cout << "A " << (A-B);
// //     else cout << "B " << (B-A);

// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;
//     vector<long long>a(N);
//     for(int i=0;i<N;i++) cin>>a[i];
//     int M;
//     cin>>M;
//     vector<pair<char,string>>v(M);
//     for(int i=0;i<M;i++) cin>>v[i].first>>v[i].second;

//     sort(a.rbegin(),a.rend());
//     deque<long long>d(a.begin(),a.end());

//     long long A=0,B=0;

//     for(auto &x:v){
//         if(x.second=="pick"){
//             long long t=d.front();
//             d.pop_front();
//             if(x.first=='A') A+=t;
//             else B+=t;
//         }else{
//             d.pop_front();
//         }
//     }

//     if(A>B) cout<<"A "<<A-B;
//     else cout<<"B "<<B-A;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int N, M;
// vector<int> scr;
// vector<pair<char, string>> act;

// int dp[21][1<< 20];

// int solve(int idx,int mask){
//     if (idx == M) return 0;
//     if (dp[idx][mask] != -1)return dp[idx][mask];
//     x`
//     char pl = act[idx].first;
//     string action = act[idx].second;
    
//     int best = (pl == 'A') ?INT_MIN:INT_MAX;
    
//     for (int i=0;i<N;i++) {
//         if (mask & (1<<i)){
//             int newMask = mask^(1<<i);
//             int scoreChange = 0;
            
//             if (action == "pick"){
//                 scoreChange = (pl == 'A') ?scr[i]:-scr[i];
//             }
            
//             int result = scoreChange+solve(idx + 1,newMask);
            
//             if (pl == 'A'){
//                 best = max(best, result);
//             } else{
//                 best = min(best, result);
//             }
//         }
//     }
    
//     if ((pl == 'A' && best == INT_MIN)||(pl == 'B' && best == INT_MAX)) {
//         best=solve(idx + 1, mask);
//     }
    
//     return dp[idx][mask]=best;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     cin >> N;
//     scr.resize(N);
//     for (int i = 0; i < N; i++) cin>>scr[i];
    
//     cin >> M;
//     act.resize(M);
//     for (int i = 0; i < M; i++) cin>>act[i].first>>act[i].second;
    
//     sort(scr.rbegin(),scr.rend());
//     if (N > 2 * M){
//         scr.resize(2 * M);
//         N = 2*M;
//     }
    
//     memset(dp, -1,sizeof(dp));
//     int result = solve(0, (1 << N)- 1);
    
//     if (result > 0) cout << "A " <<result<<endl;
//     else cout << "B " << -result<<endl;
    
//     return 0;
// }
