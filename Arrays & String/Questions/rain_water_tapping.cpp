#include <bits/stdc++.h>
using namespace std;

void tapped_Water(int *a, int N) {

	int totalWater = 0;

	//iterate from left to right
	int left[N+1];
	left[0] = 0; //no building extreme left
	for(int i=0; i<N; i++) {
		left[i+1] = max(left[i], a[i]);
	}

	//iterate from right to left & calculate simultaneously
	int right = 0;
	for(int i=N-1; i>=0; i--) {
		right = max(a[i], right);
		//calculate total water
		totalWater += min(left[i], right) > a[i] ? min(left[i], right) - a[i] : 0; 
	}

	cout<<totalWater<<endl;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[1001];
	int N;
	cin>>N;
	for(int i=0; i<N; i++) {
		cin>>a[i];
	}

	tapped_Water(a,N);

	return 0;
}