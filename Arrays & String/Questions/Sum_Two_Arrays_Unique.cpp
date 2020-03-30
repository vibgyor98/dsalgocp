#include <iostream>
using namespace std;

void rough_add(int n, int *a1, int m, int *a2) {

	if(n>m) {
		for(int i=ist_last; i>=0; i--) {
			sum = a1[i] + a2[i];
			if(sum%10)
		}
	}

	int ist_last = n-1;
	int ist_last = m-1;
	int ans[1001];
	int sum = 0;
	int carry = 0;
	for(int i=1st_lst; i>=0; i--) {

	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a1[n];
	for(int i=0; i<n; i++) 
		cin>>a1[i];

	int m;
	cin>>m;
	int a2[m];
	for(int i=0; i<m; i++)
		cin>>a2[i];

	add(n,a1,m,a2);

	return 0;
}

// input
// 4
// 1 0 2 9
// 5
// 3 4 5 6 7

// output
// 3, 5, 5, 9, 6, END