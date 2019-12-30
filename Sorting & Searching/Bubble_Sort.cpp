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

	//Bubble Sort Logic
	for(ll i=0; i<n-1; i++) {
		for(ll j=0; j<n-i-1; j++) {
			if(a[j]>a[j+1]) {
				swap(a[j],a[j+1]);
			}
		}
	}

	for(ll i=0; i<n; i++) {
		cout<<a[i]<<endl;
	}

	return 0;
}

//Input
// 4	-> size of array
// 2
// -18
// 45
// 30

//Output
// -18
// 2
// 30
// 45