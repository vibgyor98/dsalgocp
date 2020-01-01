#include <iostream>
using namespace std;

//binary Search
int searchIdx(int *a, int n, int key) {
	int s=0;
	int e=n-1;

	while(s<=e) {
		int m=s+(e-s)/2;
		if(a[m]==key) {
			return m;
		} else if(a[m]<key) {
			s=m+1;
		} else {
			e=m-1;
		}
	}
	return -1;
}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int key;
	cin>>key;
	int ans = searchIdx(a,n,key);
	if(ans==-1) {
		cout<<"-1";
	} else {
		cout<<ans;
	}

	return 0;
}

//Input
// 5
// 3
// 5
// 6
// 9
// 78
// 6

//Output
// 2