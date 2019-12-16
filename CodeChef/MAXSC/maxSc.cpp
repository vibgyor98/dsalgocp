#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t, sum = 0;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		ll run = n;
		while(run--) {
			// int *arr = new int[n];
			ll arr[n];
			for(ll i=0; i<n; i++) {
				cin>>arr[i];
			}

			//Logic
			ll cs, ms =0;
			for(ll i=0; i<n; i++) {
				cs = arr[i];
				ms = max(cs, ms);
			}

			sum += ms;
			// delete [] arr;
		}
		cout<<sum<<endl;
		sum = 0;		
	}
	

	return 0;
}