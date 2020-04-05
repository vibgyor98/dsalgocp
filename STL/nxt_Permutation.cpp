#include <iostream>
#include <algorithm>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		next_permutation(a, a + n);
		for (int i = 0; i < n; i++) cout << a[i] << " ";
		cout << "\n";
	}

	return 0;
}

// input
// 2
// 3
// 1 2 3
// 3
// 3 2 1

// output
// 1 3 2
// 1 2 3

