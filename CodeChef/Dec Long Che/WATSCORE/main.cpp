#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	int Q[1001];
	int S[1001];
	int qn[] = {1,2,3,4,5,6,7,8};
	int p;
	while(t--) {
		int n;
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>p;
			if(p<9) {
				Q[i]=p;
				cin>>S[i];
			} else {
				i++;
			}
		}
		for(int i=0; i<n; i++) {
			cout<<Q[i]<<" ";
			cout<<S[i]<<endl;
		}
	}


	return 0;
}

