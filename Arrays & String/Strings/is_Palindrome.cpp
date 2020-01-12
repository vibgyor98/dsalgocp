#include <iostream>
using namespace std;

bool isPalindrome(int *a, int size, int n) {

	if(n==size/2) {
		return true;
	}

	if(a[n-1]!=a[size-n]) {
		return false;
	}

	isPalindrome(a,size,n+1);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int size;
	cin>>size;
	int a[size];
	for(int i=0; i<size; i++)
		cin>>a[i];

	int x = isPalindrome(a,size,1);
	if(x) cout<<"true";
	else cout<<"false";

	// isPalindrome(a,size,1);

	return 0;
}

//input
// 9
// 5 3 0 0 7 0 0 0 0 
// 6 0 0 1 9 5 0 0 0 
// 0 9 8 0 0 0 0 6 0 
// 8 0 0 0 6 0 0 0 3 
// 4 0 0 8 0 3 0 0 1 
// 7 0 0 0 2 0 0 0 6 
// 0 6 0 0 0 0 2 8 0 
// 0 0 0 4 1 9 0 0 5 
// 0 0 0 0 8 0 0 7 9

//output
//false