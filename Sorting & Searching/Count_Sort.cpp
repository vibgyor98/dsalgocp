#include <iostream>
using namespace std;

#define ll long long int
#define fix INT_MAX


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll a[n];
	ll freq[fix] = {};
	for(ll i=0; i<n; i++) {
		cin>>a[i];
		fix[a[i]]+=1;
	}

	
	for(int i=0; i<n; i++) {
		if(fix[i]==0)
			continue;
		else {
			if(fix[i]>0) {
				for(int j=fix[i]; i>0; i--) {
					cout<<fix[i]<<" ";
				}
			}
		}
	}

	return 0;
}

//Input
// 8
// 1 3 4 5 5 2 7 8

//Output
// 2 1 4 3 6 5