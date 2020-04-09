#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define mod 1000000007

ll comp(ll a, ll b) {
	return a > b;
}

void solve(ll *a, ll n) {
	sort(a, a + n, comp);
	ll ans = 0;
	ll add = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			ans += a[i];
		} else {
			add = a[i] - i;
			if (add < 0) ans += 0;
			else ans += a[i] - i;
		}
	}
	ll res = (ans % mod);
	cout << res << "\n";
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		solve(a, n);
	}

	return 0;
}

/*
input
2
3
6 6 6
3
0 1 0

output
15
1
*/
