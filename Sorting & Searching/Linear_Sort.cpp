#include <iostream>
using namespace std;

#define ll long long int


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0; i<n; i++)
		cin>>a[i];

	ll mid = 0;
	ll low = 0;
	ll high = n-1;

	//Linear Sort Logic
	while(mid <= high) {
		if(a[mid]==0) {
			swap(a[low],a[mid]);
			low++;
			mid++;
		} else if(a[mid]==1) {
			mid++;
		} else {
			swap(a[mid],a[high]);
			high--;
		}
	}

	for(ll i=0; i<n; i++) {
		cout<<a[i]<<endl;
	}

	return 0;
}

//Input
// 5	-> size of array
// 1 0 2 1 2

//Output
// 0 1 1 2 2