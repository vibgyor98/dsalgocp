#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

// void primeSieve(ll *p, ll n) {
// 	for (ll i = 3; i <= n; i += 2) p[i] = 1;
// 	for (ll i = 3; i <= n; i += 2) {
// 		if (p[i] == 1) {
// 			for (ll j = i * i; j <= n; j += i) {
// 				p[j] = 0;
// 			}
// 		}
// 	}
// 	p[2] = 1;
// 	p[1] = p[0] = 0;
// }

ll primeFactors(ll x) {
	ll count = 0;
	while (x % 2 == 0) {
		count++;
		x = x / 2;
	}
	for (ll i = 3; i <= sqrt(x); i = i + 2) {
		while (x % i == 0) {
			count++;
			x = x / i;
		}
	}
	if (x > 2) count++;
	return count;
}

void solve(ll x, ll k) {
	ll pFacts = primeFactors(x);
	if (pFacts >= k) cout << "1" << "\n";
	else cout << "0" << "\n";
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll t;
	cin >> t;
	while (t--) {
		ll x, k;
		cin >> x >> k;
		solve(x, k);
	}

	return 0;
}