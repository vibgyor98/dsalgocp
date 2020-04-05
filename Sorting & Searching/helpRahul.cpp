#include <iostream>
using namespace std;

int find(int *a, int n, int k) {
	int s = 0;
	int e = n - 1;
	while (s <= e) {
		int m = s + (e - s) / 2;
		if (a[m] == k) return m;
		else if (a[s] <= a[m]) {
			if (k >= a[s] && k <= a[m]) e = m - 1;
			else s = m + 1;
		} else {
			if (k >= a[m] && k <= a[e]) s = m + 1;
			else e = m - 1;
		}
	}
	return -1;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int k;
	cin >> k;

	int ans = find(a, n, k);
	cout << ans;

	return 0;
}

// input
// 5
// 4
// 5
// 1
// 2
// 3
// 2

// output
// 3

// Explanation
// The given rotated array is [4, 5, 1, 2, 3].
// The element to be searched is 2 whose index is 3.