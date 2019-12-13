#include<bits/stdc++.h>
using namespace std;

void triplet_Sum(int *a, int N, int target) {

	//sort array
	sort(a,a+N);
	int l, r, x;
	for(int i=0; i<N-1; i++) {
		l = i+1;
		r = N-1;
		x = a[i];
		while(l<r) {
			if(x+a[l]+a[r] == target) {
				cout<<x<<", "<<a[l]<<" and "<<a[r]<<endl;
				l++;
				r--;
			} else if(x+a[l]+a[r] < target) {
				l++;
			} else {
				r--;
			}
		}
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[10001];
	int N;
	cin>>N;
	for(int i=0; i<N; i++) {
		cin>>a[i];
	}
	int target;
	cin>>target;

	triplet_Sum(a,N,target);

	return 0;
}