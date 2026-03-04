#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

long long nCr(int n, int r) {
    if (r<0||r>n) return 0;
    if (r==0||r==n) return 1;

    long long result = 1;
    r = min(r, n - r);
    for (int i = 1; i <= r; i++) {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main() {
    int k;
    cin>>k;
    
    vector<string>results;
    
    for (int i=0;i<k;i++) {
        int N,T,M;
        cin >> N >> T >> M;
        if (N*M>T) {
            results.push_back("0");
            continue;
        }
        
        int remaining=T-N*M;
        
        long long ways=nCr(remaining + N - 1, N - 1);
        results.push_back(to_string(ways));
    }
    
    for (const string& result:results) {
        cout<<result<<endl;
    }
    
    return 0;
}
