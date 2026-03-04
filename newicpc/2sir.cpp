// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t0; 
//     cin >> t0;

//     while (t0--) {
//         int Z99;                     
//         cin>>Z99;

//         long long A1, A2;           
//         cin>>A1>>A2;

//         vector<long long> P1(Z99), P2(Z99);   
//         for (int i=0; i<Z99;i++) cin >> P1[i];
//         for (int i=0;i<Z99;i++) cin>> P2[i];

//         vector<long long> H1(Z99 - 1), H2(Z99 - 1); 
//         for (int i=0;i<Z99-1;i++) cin>>H1[i];   
//         for (int i=0;i<Z99-1;i++) cin>>H2[i];   

//         long long B1, B2;           
//         cin>>B1>>B2;

//         long long dpAlpha = A1+P1[0];    
//         long long dpBeta  = A2+P2[0];    

//         for (int j = 1; j < Z99; j++) {
//             long long newAlpha = min(dpAlpha + P1[j],dpBeta + H2[j - 1] + P1[j]);
//             long long newBeta  = min(dpBeta + P2[j],dpAlpha + H1[j - 1] + P2[j]);
//             dpAlpha = newAlpha;
//             dpBeta = newBeta;
//         }

//         long long answer = min(dpAlpha + B1, dpBeta + B2);
//         cout << answer << endl;
//     }
//     return 0;
// }