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

	//Insertion Sort Logic
	for(ll i=1; i<n; i++) {
		ll j=i-1;
		ll no=a[i];
		while(j>=0 && a[j]>no) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = no;		
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