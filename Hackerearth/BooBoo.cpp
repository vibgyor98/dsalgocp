#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll N, M;
	cin>>N;
	cin>>M;

	ll a[N];
	for(int i=0; i<N; i++) {
		cin>>a[i];
	}

	sort(a,a+N);

	solve()
	
	return 0;
}