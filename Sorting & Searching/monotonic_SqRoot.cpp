#include <iostream>
using namespace std;

float sqRoot(int n, int p) {
	int s = 0;
	int e = n;
	float ans = -1;
	while (s <= e) {
		int m = s + (e - s) / 2;
		if (m * m == n) return m;
		if (m * m < n) {
			ans = m;
			s = m + 1;
		} else {
			e = m - 1;
		}
	}

	float inc = 0.1;
	for (int times = 1; times <= p; times++) {
		while (ans * ans <= n) ans = ans + inc;
		ans = ans - inc;
		inc /= 10;
	}
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, p;
	cin >> n >> p;
	cout << sqRoot(n, p);

	return 0;
}