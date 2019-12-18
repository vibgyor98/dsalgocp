#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, pos;
	cin>>n>>pos;
	int count = 0;
	int a[n+1];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	if(pos<n) {
		for(int i=0; i<n; i++) {
			if(a[i]!=0 && (a[i]>=a[pos-1])) {
				count++;
			}
		}
		cout<<count<<endl;
	} else if(n==pos) {
		for(int i=0; i<n; i++) {
			if(a[i]>=a[pos-1]) {
				count++;
			}
		}
		cout<<count<<endl;
	} else {
		cout<<count<<endl;
	}

	return 0;
}