#include <bits/stdc++.h>
using namespace std;

#define ll long long

// ll gcd(ll a, ll b) {
// 	return gcd(b,a%b);
// }

void solve(ll n) {
	if (n == 1) {
		cout << "1" << "\n" << "1" << "\n";
	} else {
		cout << n / 2 << "\n";
		if (n % 2 == 0) {
			for (ll i = 1; i <= n; i += 2) {
				cout << "2 " << i << " " << i + 1 << "\n";
			}
		} else {
			cout << "3 " << "1 " << "2 " << "3 " << "\n";
			for (ll i = 4; i <= n; i += 2) {
				cout << "2 " << i << " " << i + 1 << "\n";
			}
		}
	}
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
		solve(n);
	}

	return 0;
}

/*
input
1
5
output
2
3 1 2 5
2 3 4
*/