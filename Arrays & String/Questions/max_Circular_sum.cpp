#include<bits/stdc++.h>
using namespace std;

//Kadane's Algo
int kadane(int *a, int n) {
	int best = 0;
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum = max(a[i],sum+a[i]);
		best = max(sum,best);
	}
	return best;
}

//Max Circular Sum
int maxCircular_sum(int *a, int n) {

	//find max contigues subArr sum
	int max_Sum = kadane(a,n);

	//find the max sum that includes corner ele
	int max_wrap =0;
	for(int i=0; i<n; i++) {
		max_wrap += a[i]; //calculate max array sum
		a[i] = -a[i]; //invert the array (change in sign)
	}

	max_wrap = max_wrap + kadane(a,n);

	return (max_wrap > max_Sum) ? max_wrap : max_Sum;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[10001];
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		for(int i=0; i<n; i++) {
			cin>>a[i];
		}

		int maxCirSum = maxCircular_sum(a,n);
		cout<<maxCirSum;
	}

}