#include <iostream>
#include <algorithm>
using namespace std;

int linearSearch(int *a, int i, int n, int key) {
	if(i==n) return -1;
	if(a[i]==key) return i;
	return linearSearch(a,i+1,n,key);
}

int binarySearch(int *a, int i, int n, int key) {
	int l = i;
	int r = n-1;
	if(r>=l) {
		int m = l+(r-l)/2;
		if(a[m]==key) return m;
		else if(a[m]>key) return binarySearch(a,l,m-1,key);
		else return binarySearch(a,m+1,r,key);
	}
	return -1;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[] = {1,2,3,4,6,9,5};
	int s = sizeof(a)/sizeof(int);
	int key = 5;
	cout<<linearSearch(a,0,s,key);
	cout<<endl;
	sort(a,a+s);
	cout<<binarySearch(a,0,s,key);

	return 0;
}