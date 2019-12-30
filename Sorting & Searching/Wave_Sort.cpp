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

	//Wave Sort
	for(int i=0; i<n; i+=2) {
		//Check for the left ele
		if(i>0 && a[i-1]>a[i]) {
			swap(a[i],a[i-1]);
		}
		//chk for the right ele
		if(i<=n-2 && a[i+1]>a[i]) {
			swap(a[i],a[i+1]);
		}
	}

	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}

	return 0;
}

//Input
// 6
// 1 3 4 2 7 8

//Output
// 2 1 4 3 6 5