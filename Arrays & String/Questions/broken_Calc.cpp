#include <iostream>
using namespace std;

#define ll long long

ll factorial(ll n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n;
	cin >> n;

	ll ans = factorial(n);
	cout << ans;

	return 0;
}