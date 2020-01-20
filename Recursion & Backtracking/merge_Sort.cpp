#include <iostream>
using namespace std;

int n;

void merge(int *a, int s, int e) {
	int m=s+(e-s)/2;
	int i=s;
	int j=m+1;
	int k=s;
	int temp[n];

	while(i<=m && j<=e) {
		if(a[i]<a[j]) {
			temp[k++]=a[i++];
		} else {
			temp[k++]=a[j++];
		}
	}

	while(i<=m) {
		temp[k++]=a[i++];
	} 
	while(j<=e) {
		temp[k++]=a[j++];
	}

	//copy all the elements to original array
	for(int i=s; i<=e; i++) {
		a[i]=temp[i];
	}
}

void mergeSort(int *a, int s, int e) {
	//base 
	if(s>=e) {
		return;
	}

	//rec
	int m = s+(e-s)/2;
	mergeSort(a,s,m);
	mergeSort(a,m+1,e);

	merge(a,s,e);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

	mergeSort(a,0,n-1);

	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}