#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxProfit(int k, vector<int>& prices) {
    int n = prices.size();
    if (n == 0 || k == 0) return 0;
    
    if (k >= n / 2) {
        int profit = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
    
    // Space optimized DP
    vector<int> buy(k + 1, INT_MIN);
    vector<int> sell(k + 1, 0);
    
    for (int price : prices) {
        for (int i = 1; i <= k; i++) {
            buy[i] = max(buy[i], sell[i - 1] - price);
            sell[i] = max(sell[i], buy[i] + price);
        }
    }
    
    return sell[k];
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k, n;
        cin >> k >> n;
        
        vector<int> prices(n);
        for (int i = 0; i < n; i++) {
            cin >> prices[i];
        }
        
        cout << maxProfit(k, prices) << endl;
    }
    
    return 0;
}