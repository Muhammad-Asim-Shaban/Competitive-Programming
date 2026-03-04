#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = n;
    vector<pair<int,int>> pf;

    // Prime factorization
    for(int i = 2; i*i <= x; i++) {
        if(x % i == 0) {
            int cnt = 0;
            while(x % i == 0) { x /= i; cnt++; }
            pf.push_back({i, cnt});
        }
    }
    if(x > 1) pf.push_back({x, 1});

    // Generate all factors
    vector<int> factors = {1};
    for(auto [p, e] : pf) {
        vector<int> tmp;
        for(int f : factors) {
            int val = 1;
            for(int i = 0; i <= e; i++) {
                tmp.push_back(f * val);
                val *= p;
            }
        }
        factors = tmp;
    }

    sort(factors.begin(), factors.end());
    for(int f : factors) cout << f << " ";
    cout << endl;
}
