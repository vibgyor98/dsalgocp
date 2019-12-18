#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--) {
		ll a[1001];
		ll count0 = 0;
		ll count2 = 0;
		ll ans = 0;
		ll n;
		cin>>n;
		for(ll i=0; i<n; i++) {
			cin>>a[i];
			if(a[i]==2) {
				count2++;
			}
			if(a[i]==0) {
				count0++;
			}
		}
		ans += (count2 * (count2-1))/2;
		ans += (count0 * (count0-1)/2);
		cout<<ans<<endl;
	}
	return 0;
}