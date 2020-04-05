#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

bool canPlaceCows(ll *stalls, ll n, ll c, ll minSep) {
	ll lastCow = stalls[0]; //place the first cow in the first stall
	ll cnt = 1;
	for (ll i = 1; i < n; i++) {
		if (stalls[i] - lastCow >= minSep) { //checking all possible config
			lastCow = stalls[i];
			cnt++;
			if (cnt == c) {
				return true;
			}
		}
	}
	return false;
}

void solve(ll *stalls, ll n, ll c) {
	sort(stalls, stalls + n);

	ll s = 0;
	ll e = stalls[n - 1] - stalls[s]; //create the search space
	ll ans = 0;
	while (s <= e) {
		ll m = s + (e - s) / 2;
		bool kyaRakhPaye = canPlaceCows(stalls, n, c, m);
		if (kyaRakhPaye) {
			ans = m;
			s = m + 1;
		} else {
			e = m - 1;
		}
	}
	cout << ans << "\n";
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, c;
	cin >> n >> c;
	ll a[n];
	for (ll i = 0; i < n; i++) cin >> a[i];

	solve(a, n, c);

	return 0;
}

// input
// 5 3
// 1 2 8 4 9

// output
// 3

// constraints
// 2 <= N <= 100,000
// 0 <= xi <= 1,000,000,000
// 2 <= C <= N