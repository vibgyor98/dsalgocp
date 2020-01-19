#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int j) {
	
	//base case
	if(n==1) return;
	if(j==n-1) return bubbleSort(a,n-1,0);

	//Rec case
	if(a[j]>a[j+1]) swap(a[j],a[j+1]);
	bubbleSort(a,n,j+1);

	return;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[] = {7,100,1,-1,-101,10};
	int n = sizeof(a)/sizeof(int);

	bubbleSort(a,n,0);

	for(int i=0; i<n; i++) 
		cout<<a[i]<<" ";

	return 0;
}