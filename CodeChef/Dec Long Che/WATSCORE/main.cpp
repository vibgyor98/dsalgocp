#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	
	int t;
	cin>>t;
	while(t--) {
		int N;
		cin>>N;
		int Q[N];
		int S[N];

		for(int i=0; i<N; i++) {
			cin>>Q[i];
			cin>>S[i];
		}

		int qno[8] = {1,2,3,4,5,6,7,8};
		int freq[8] = {0,0,0,0,0,0,0,0};
		// int sum=0;
		for(int i=0; i<N; i++) {
			if(Q[i]<9) {
				for(int i=0; i<8; i++) {
					if(Q[i]==qno[i]) {
						freq[i] = freq[i] + 1;
					}
				}
			}
			// cout<<sum<<" ";
		}
		// cout<<sum<<endl;

		//Debug
		for(int i=0; i<8; i++) {
			cout<<freq[i]<<" ";
		}
	}



	return 0;
}

