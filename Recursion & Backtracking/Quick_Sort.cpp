#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//shuffle the idx
void shuffle(int *a, int s, int e) {
	srand(time(NULL));
	for(int i=e; i>0; i--) {
		int j=rand()%(i+1);
		swap(a[i],a[j]);
	}
}

int partition(int *a, int s, int e) {
	int pivot=a[e];
	int i=s-1;
	int j=s;
	for(;j<e;j++) {
		if(a[j]<=pivot) {
			i++;
			swap(a[i],a[j]);
		}
	}
	//bring the pivot ele to its sorted pos
	swap(a[i+1],a[e]);
	//idx of the pivot ele
	return i+1;
}

void quickSort(int *a, int s, int e) {
	//base
	if(s>=e) {
		return;
	}
	//rec
	int pivot = partition(a,s,e);
	quickSort(a,s,pivot-1);
	quickSort(a,pivot+1,e);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

	shuffle(a,0,n-1);
	quickSort(a,0,n-1);

	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}

	return 0;
}