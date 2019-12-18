#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt.txt", "r", stdin);
	freopen("output.txt.txt", "w", stdout);
	#endif

	
	int t;
	cin>>t;

	while(t--) {
		int a[11] = {0};
		int n;
		cin>>n;
		for(int i=0; i<n; i++) {
			int q,si;
			cin>>q>>si;
			if(q<9 && a[q]<si) {
				a[q] = si;
			}
		}

		int sum = 0;
		for(int i=0; i<9; i++) {
			sum += a[i];
		}
		cout<<sum<<endl;
	}


	return 0;
}

