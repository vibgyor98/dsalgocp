#include <bits/stdc++.h>
using namespace std;

void max_Bitonic_len(int *a, int n) {
	int inc[n];
	int dec[n];
	int i,max;
	
	inc[0] = 1;
	dec[n-1] = 1;

	//Left to Right
	for(i=1; i<n; i++) {
		inc[i] = (a[i] >= a[i-1]) ? inc[i-1]+1 : 1;
	}

	//Right to Left
	for(i=n-2; i>=0; i--) {
		dec[i] = (a[i] >= a[i+1]) ? dec[i+1]+1 : 1;
 	}

 	//Max Len of Bitonic sequence from inc[] & dec[]
 	max = inc[0] + dec[0] - 1;
 	for(i=1; i<n; i++) {
 		if(inc[i] + dec[i] - 1 > max) {
 			max = inc[i] + dec[i] - 1;
  		}
 	}

 	cout<<max<<endl;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];

		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		max_Bitonic_len(a,n);
	}

	return 0;
}