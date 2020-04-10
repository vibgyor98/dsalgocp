#include <iostream>
using namespace std;

#define ll long long

void primeSieve(ll *p, ll n) {
	for (ll i = 3; i <= n; i += 2) p[i] = 1;
	for (ll i = 3; i <= n; i += 2) {
		if (p[i] == 1) {
			for (ll j = i * i; j <= n; j += i) {
				p[j] = 0;
			}
		}
	}
	p[2] = 1;
	p[1] = p[0] = 0;

	cout << p[n];
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n;
	cin >> n;
	ll p[1000007];
	primeSieve(p, n);

	return 0;
}