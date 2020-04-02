#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n][n];
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s += a[j][i];
		}
		cout << s << "\n";
		if (s != 0) {
			cout << "NO";
			break;
		}
		s = 0;
	}

	if (s == 0) cout << "YES";

	return 0;
}

// input
// 3
// 4 1 7
// -2 4 -1
// 1 -5 -3

// output
// NO