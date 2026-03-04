<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 1; i < n; i++) {
		if (abs(a[i - 1] - a[i]) <= 1) {
			cout << 0 << endl;
			return;
		}
	}
	for (int i = 1; i + 1 < n; i++) {
		if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
			cout << 1 << endl;
			return;
		}
		if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
			cout << 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main() {
#ifdef _DEBUG   
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
=======
#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 1; i < n; i++) {
		if (abs(a[i - 1] - a[i]) <= 1) {
			cout << 0 << endl;
			return;
		}
	}
	for (int i = 1; i + 1 < n; i++) {
		if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
			cout << 1 << endl;
			return;
		}
		if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
			cout << 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main() {
#ifdef _DEBUG   
	freopen("input.txt", "r", stdin);
	int tt = clock();
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}