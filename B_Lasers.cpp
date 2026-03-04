<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        long long x, y;
        cin >> n >> m >> x >> y;
        for (long long i = 0, v; i < n; ++i) cin >> v;
        for (long long i = 0, v; i < m; ++i) cin >> v;
        cout << (n + m) << '\n';
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        long long x, y;
        cin >> n >> m >> x >> y;
        for (long long i = 0, v; i < n; ++i) cin >> v;
        for (long long i = 0, v; i < m; ++i) cin >> v;
        cout << (n + m) << '\n';
    }
    return 0;
}
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
