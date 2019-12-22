#include <bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N;
	cin>>N;
	int a[N];
	for(int i=0; i<N; i++) {
		cin>>a[i];
	}
	int n;
	cin>>n;
	sort(a,a+N);

	for(int i=0; i<N; i++) {
		int j;
		int temp = n;
		for(j=1; j<=n; j++) {
			if(a[i]==a[j]) {
				temp--;
			}
		}
		if(temp==0) {
			cout<<a[i]<<endl;
			break;
		}
	}
	

	return 0;
}