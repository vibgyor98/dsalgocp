#include <iostream>
using namespace std;

void solve(int *a, int n) {
	int flag = 0;
	int prev = 0;
	for (int i = 0; i < n; i++) {
		if (flag == 0) {
			if (a[i] == 1) {
				flag = 1;
				prev = i;
			}
		} else {
			if (a[i] == 1) {
				if (i - prev >= 6) {
					prev = i;
				} else {
					flag = 2; //greedy approach
					break;
				}
			}
		}
	}
	if (flag == 2) cout << "NO" << "\n";
	else cout << "YES" << "\n";
}

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
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		solve(a, n);
	}

	return 0;
}

/*input

3
3
1 0 1
7
1 0 0 0 0 0 1
11
0 1 0 0 0 0 0 1 0 0 1

output

NO
YES
NO
*/