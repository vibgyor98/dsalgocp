
/* Q: Find the maximum value of an array */

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli largestElement(lli arr[], lli n) {
	//Comparing each element
	lli max = arr[0];
	lli p;
	for(p=0; p<n; p++) {
		if(arr[p] > max) {
			max = arr[p];
		}
	}

	return max;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	lli  n;
	cin>>n;

	lli arr[n];
	for(lli i=0; i<n; i++) cin>>arr[i];

	cout<<largestElement(arr,n);

	return 0;
}