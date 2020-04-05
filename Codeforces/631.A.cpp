#include <iostream>
#include <set>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		set<int> s;
		for (int i = 0; i < n; i++) {
			s.insert(a[i]);
		}

		for (auto it = s.begin(); it != s.end(); it++) {
			if ((x >= *it) || ((*it - 1) == x)) {
				x++;
			} else {
				break;
			}
		}
		cout << x << "\n";
	}

	return 0;
}