#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(int *a, int N, int M) {

	int s = 0;
	int e = N-1;
	while(s<e) {
		for(int i=0; i<M; i++) {
			if((a[i]*a[++i])/N)
		}
	}

}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll N, K;
	cin>>N>>K;

	ll a[N];
	for(ll i=0; i<N; i++) {
		cin>>a[i];
	}
	sort(a,a+N);
	solve(a,N,M);
	
	return 0;
}