#include<bits/stdc++.h>
using namespace std;

void solve(int *a, int n, int s) {
	int ab=0;
	int count=0;
	for(int i=n-1; i>=0; i--) {
		ab+=a[i];
		count++;
		if(ab>s) break;
	}
	cout<<count;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[n];
	int total_Sum = 0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		total_Sum+=a[i];
	}
	int half = total_Sum/2;
	sort(a,a+n);
	solve(a,n,half);

	return 0;
}

//INPUT
// 2
// 3 3
//OUTPUT
// 2

//INPUT
// 5
// 1 2 3 4 5
//OUTPUT
//2