#include <bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N,k,i,j;
	cin>>N;
	int a[N],b[N-1]={};
	for(i=0; i<N; i++) {
		cin>>a[i];
	}
	cin>>k;
	sort(a,a+N);
	for(i=0; i<N-1; i++) {
		for(j=i+1; j<N && a[i]==a[j]; j++) {
			b[i]++;
		}
		if(b[i]==k-1) {
			cout<<a[i];
			break;
		}
	}

	return 0;
}