#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[100] = {};
ll catalan(int n) {
	if(n==0) {
		return 1;
	}
	if(dp[n] != 0) {
		return dp[n];
	}
	ll ans = 0;
	for(int i=1; i<=n; i++) {
		ans += catalan(i-1) * catalan(n-i);
	}
	dp[n] = ans;
	return ans;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	for(int i=0; i<=n; i++) {
		cout<<catalan(i)<<" ";
	}

	return 0;
}