<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	cin >> n >> k;

	vector<long long> days(n);
	for (long long &d : days) { cin >> d; }

	long long last_day = days[0];
	long long cost = k + 1;  // Start the first subscription
	for (long long d : days) {
		// Should Bessie extend the most recent subscription?
		if (d - last_day < k + 1) {
			cost += d - last_day;
		} else {
			// Or just start a new one entirely?
			cost += k + 1;
		}

		// Store the date of the last subscription
		last_day = d;
	}

	cout << cost << endl;
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	cin >> n >> k;

	vector<long long> days(n);
	for (long long &d : days) { cin >> d; }

	long long last_day = days[0];
	long long cost = k + 1;  // Start the first subscription
	for (long long d : days) {
		// Should Bessie extend the most recent subscription?
		if (d - last_day < k + 1) {
			cost += d - last_day;
		} else {
			// Or just start a new one entirely?
			cost += k + 1;
		}

		// Store the date of the last subscription
		last_day = d;
	}

	cout << cost << endl;
>>>>>>> 62c235af6771a4d7812a39cd5b6348d36f92dbb0
}