#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

// prime factors
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

/*
Explanation:
The guard gave Varsha two integers X and K.
Varsha needs to determine whether there is an
integer A such that it has exactly X positive integer
divisors and exactly K of them are prime numbers.

Constraints

1≤T≤10^3
1≤X,K≤10^9

input

1
4 2

output

1
*/