#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, sum = 0;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int run = n;
		while(run--) {
			// int *arr = new int[n];
			int arr[n];
			for(int i=0; i<n; i++) {
				cin>>arr[i];
			}

			//Logic
			int cs, ms =0;
			for(int i=0; i<n; i++) {
				cs = arr[i];
				ms = max(cs, ms);
			}

			sum += ms;
			// delete [] arr;
		}
		cout<<sum<<endl;
		sum = 0;		
	}
	

	return 0;
}