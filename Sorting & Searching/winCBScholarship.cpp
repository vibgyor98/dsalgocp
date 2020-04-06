#include <iostream>
using namespace std;

#define ll long long

bool possible(ll n, ll m, ll x, ll y, ll ans) {
	if ((ans * x) <= m + (n - ans)*y) return true;
	else return false;
}

//binary search
ll solve(ll n, ll m, ll x, ll y) {
	ll s = 0;
	ll e = n;
	ll ans = 0;

	while (s <= e) {
		ll mid = s + (e - s) / 2;
		if (possible(n, m, x, y, mid)) {
			ans = max(ans, mid);
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, m, x, y;
	cin >> n >> m >> x >> y;
	cout << solve(n, m, x, y);

	return 0;
}

/*Sample Input
5 10 2 1

Sample Output
5

Explanation
File 1: Since there are 5 students, and 10 available coupons,
and each student needs just 2 coupons to get 100% discount,
so Bhaiya already has the needed number of coupons,
so all 5 students will get 100% waiver on their fees.

File 2: There are 3 students.
Bhaiya will give 100% discount to 2 students
using the initial number of discounts,
i.e. 8 out of 10 will get used.
We need atleast 2 more coupons to give discount
to the third student. Now if the third student
pay additional amount equivalent to Y=2 coupons,
we will get a total of 4 coupons in hand,
however we can not use them for giving discount
as all 3 students have been considered (2 for getting
discount and 1 for paying additional amount).*/