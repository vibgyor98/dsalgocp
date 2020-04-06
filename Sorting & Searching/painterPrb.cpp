#include <iostream>
#include <climits>
using namespace std;

#define mod 10000003
#define ll long long

//max ele in the array
ll getMax(ll* a, ll N) {
	ll ans = INT_MIN;
	for (int i = 0; i < N; i++) {
		ans = max(ans, a[i]);
	}
	return ans;
}

//sum of the arr
ll getSum(ll* a, ll N) {
	ll sum = 0;
	for (int i = 0; i < N; i++) {
		sum += a[i];
	}
	return sum % mod;
}

//No. of painters
ll noPainters(ll* a, ll N, ll m) {
	ll total = 0;
	ll numPainter = 1;
	for (int i = 0; i < N; i++) {
		total += a[i];
		if (total > m) {
			total = a[i];
			numPainter++;
		}
	}
	return numPainter;
}

void solve(ll* a, ll N, ll K, ll T) {
	int lo = getMax(a, N);
	int hi = getSum(a, N);

	while (lo <= hi) {
		ll m = lo + (hi - lo) / 2;
		ll requiredPainters = noPainters(a, N, m);
		if (requiredPainters <= K) hi = m;
		else lo = m + 1;
	}
	cout << lo;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll N;
	cin >> N;
	ll a[N];
	ll K;
	cin >> K;
	ll T;
	cin >> T;
	for (int i = 0; i < N; i++) cin >> a[i];

	solve(a, N, K, T);

	return 0;
}

/*Constraints
1<=N<=100000
1<=K<=100000
1<=T<=1000000
1<=Li<=100000

input
2 2 5
1 10

output
50

Explanation
The first painter can paint the first board in 5
units of time and the second painter will take 50 units of time to paint
the second board. Since both can paint simultaneously ,
the total time required to paint both the boards is 50.
*/