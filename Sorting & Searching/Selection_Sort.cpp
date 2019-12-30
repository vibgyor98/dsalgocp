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

	//Selection Sort Logic
	for(ll i=0; i<n-1; i++) {
		//Assume the current ith ele is min
		ll minIdx = i;
		//min ele in remaining part
		for(ll j=i+1; j<n; j++) {
			if(a[j]<a[minIdx]) {
				minIdx = j;
			}
		}
		//minIdx = min Ele
		swap(a[minIdx],a[i]);
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