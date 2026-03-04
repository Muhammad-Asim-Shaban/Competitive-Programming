<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int z = 0;
        for (char c : s) if (c == '0') ++z;
        int misplaced = 0;
        for (int i = 0; i < z; ++i) if (s[i] == '1') ++misplaced;
        cout << misplaced << '\n';
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
        int n;
        string s;
        cin >> n >> s;
        int z = 0;
        for (char c : s) if (c == '0') ++z;
        int misplaced = 0;
        for (int i = 0; i < z; ++i) if (s[i] == '1') ++misplaced;
        cout << misplaced << '\n';
    }
    return 0;
}
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
