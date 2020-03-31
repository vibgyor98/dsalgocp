#include <iostream>
using namespace std;

void rough_add(int n, int *a1, int m, int *a2) {

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