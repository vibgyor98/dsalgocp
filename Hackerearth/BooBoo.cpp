#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll N, M;
	set<ll> s;
	cin>>N>>M;
	for(ll i=0; i<N; i++) {
		ll a;
		cin>>a;
		s.insert(a);
	}
	
	if(s.size()<=M) {
		cout<<s.size();
	} else {
		cout<<M;
	}
	
	return 0;
}