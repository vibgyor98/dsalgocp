#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(int *a, int s, int e) {

	if(s>e) {
		return true;
	}

	if(a[s]==a[e]) {
		isPalindrome(a,++s,--e);
	}

	return false;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdin);
	#endif

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	// if(isPalindrome(a,0,n-1)) {
	// 	cout<<"true";
	// } else {
	// 	cout<<"false";
	// }
	cout<<isPalindrome(a,0,n-1);

	return 0;
}