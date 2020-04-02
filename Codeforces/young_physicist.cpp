#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int s1 = 0, s2 = 0, s3 = 0;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s1 += x;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		s2 += x;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		s3 += x;
	}

	int ans = s1 + s2 + s3;
	if (ans == 0) cout << "YES";
	else cout << "NO";

	return 0;
}

// input
// 3
// 4 1 7
// -2 4 -1
// 1 -5 -3

// output
// NO