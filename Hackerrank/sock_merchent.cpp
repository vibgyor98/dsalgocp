#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	int count[101] = {};
	for(int i=0; i<n; i++) {
		int m;
		cin>>m;
		count[m]++;
	}

	int res=0;
	for(int i=1; i<=100; i++) {
		res+=count[i]/2;
	}
	cout<<res;
	return 0;
}

// input
// 9
// 10 20 20 10 10 30 50 10 20

// output
// 3