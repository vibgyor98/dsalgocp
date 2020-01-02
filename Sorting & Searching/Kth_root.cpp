#include <iostream>
#include <cmath>
using namespace std;

#define ll long long int

//Square root
ll kth_root(ll n, ll k) {
	ll s=0;
	ll e=n;
	ll ans;

	while(s<=e) {
		ll mid = s+(e-s)/2;
		//perfect Square
		if(pow(mid,k)==n) {
			ans = mid;
			break;
		}
		//other
		else if(pow(mid,k)<n) {
			s = mid+1;
			ans = mid;
		} else {
			e = mid-1;
		}
	}

	//Fractional
	// float inc=0.1;
	// for(int i=1; i<=p; i++) {
	// 	while(ans*ans<=no) {
	// 		ans += inc;
	// 	}
	// 	//ans*ans>no
	// 	ans = ans - inc;
	// 	inc = inc/10;
	// }
	return ans;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		ll n,k;
		cin>>n>>k;
		cout<<kth_root(n,k)<<endl;
	}
	
	
	return 0;
}

//Input
// 2
// 10000 1
// 1000000000000000 10

//Output
// 10000
// 31
