#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll a, ll b) {
	ll sum = 0;
	ll d = abs(a-b);
	for(int i=0;;++i) {
		sum+=i;
		if(sum >= d && (sum-d)%2==0) {
			cout<<i<<'\n';
			break;
		}
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--) {
		ll a,b;
		cin>>a>>b;
		solve(a,b);
	}

	return 0;
}