#include <iostream>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	ll ans = (a * b) / gcd(a, b);
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n1, n2;
	cin >> n1 >> n2;
	cout << lcm(n1, n2);

	return 0;
}

/*
Constraints
0 < N1 < 1000000000 0 < N2 < 1000000000

Output Format
Sample Input
4
6
Sample Output
12
*/