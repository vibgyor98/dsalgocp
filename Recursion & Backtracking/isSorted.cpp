#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {

	//base case
	if(n==1) return true;

	//rec case
	if(a[0]<=a[1] && isSorted(a+1,n-1)) return true;
	return false;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	if(isSorted(a,n)) cout<<"Sorted";
	else cout<<"Not Sorted";

	return 0;
}