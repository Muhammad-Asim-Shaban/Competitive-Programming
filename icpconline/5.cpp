#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        long long M;
        cin >> N >> M;
        
        vector<long long> r(N);
        for (int i = 0; i < N; i++) {
            cin >> r[i];
        }
        
        // Strategy 1: Try all ones
        long long sum_r = 0;
        for (int i = 0; i < N; i++) sum_r += r[i];
        
        if (sum_r % N == 0) {
            for (int i = 0; i < N; i++) cout << 1 << " \n"[i == N-1];
            continue;
        }
        
        // Strategy 2: Try to adjust one value
        long long rem = (N - (sum_r % N)) % N;
        
        bool found = false;
        vector<long long> t(N, 1);
        
        for (int i = 0; i < N && !found; i++) {
            // We need: r[i] * (t[i]-1) ≡ rem (mod N)
            // Try small increments
            for (long long inc = 1; inc <= min(M-1, 1000LL); inc++) {
                if ((r[i] * inc) % N == rem) {
                    if (1 + inc <= M) {
                        t[i] = 1 + inc;
                        found = true;
                        break;
                    }
                }
            }
        }
        
        if (!found) {
            // Strategy 3: Try to use two different values
            // We need: sum(r[i] * t[i]) ≡ 0 (mod sum(t[i]))
            // This is harder to satisfy, but we can try a pattern
            
            // Use alternating pattern to avoid triples
            vector<int> pattern = {1, 2};
            if (M >= 2) {
                // Try pattern: 1, 2, 1, 2, ...
                long long weighted_sum = 0, total_t = 0;
                for (int i = 0; i < N; i++) {
                    t[i] = pattern[i % 2];
                    weighted_sum += r[i] * t[i];
                    total_t += t[i];
                }
                
                if (weighted_sum % total_t == 0) {
                    found = true;
                } else if (M >= 3) {
                    // Try pattern with three values
                    pattern = {1, 2, 3};
                    weighted_sum = 0, total_t = 0;
                    for (int i = 0; i < N; i++) {
                        t[i] = pattern[i % 3];
                        weighted_sum += r[i] * t[i];
                        total_t += t[i];
                    }
                    
                    if (weighted_sum % total_t == 0) {
                        found = true;
                    }
                }
            }
        }
        
        if (found) {
            // Verify no three consecutive equal values
            for (int i = 2; i < N; i++) {
                if (t[i] == t[i-1] && t[i] == t[i-2]) {
                    // Fix the triple by swapping with a neighbor that breaks the pattern
                    for (int j = i; j < N; j++) {
                        if (j+1 < N && t[j+1] != t[j]) {
                            swap(t[j], t[j+1]);
                            break;
                        }
                        if (j-3 >= 0 && t[j-3] != t[j]) {
                            swap(t[j-1], t[j-2]);
                            break;
                        }
                    }
                }
            }
            
            for (int i = 0; i < N; i++) {
                cout << t[i] << " \n"[i == N-1];
            }
        } else {
            cout << "-1\n";
        }
    }
    
    return 0;
}