#include <iostream>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int N,M;
		cin>>N>>M;
		int ftypes[N+1];
		set<int> s;
		int price[M+1];
		for(int i=1; i<=N; i++) {
			int ft;
			cin>>ft;
			s.insert(ft);
			ftypes[i]=ft;
		}
		int sum[N+1] = {0};
		int minimum = INT_MAX;
		for(int i=1; i<=N; i++) {
			cin>>price[i];
			sum[ftypes[i]] = sum[ftypes[i]]+price[i];
			// cout<<sum[ftypes[i]]<<endl;
		}	
		for(int i=1; i<=s.size(); i++) {
			minimum = min(minimum,sum[i]);
			// cout<<sum[i]<<endl;
		}
		cout<<minimum<<endl;
	}


	return 0;
}

//input
// 1
// 6 4
// 1 2 3 3 2 2
// 7 3 9 1 1 1

//output
//5