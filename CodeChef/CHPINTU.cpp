#include <iostream>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int ftypes[50] = {0};
		int fbaskt[50] = {0};
		int fprice[50] = {0};
		int N,M;
		cin>>N>>M;
		set<int> s;
		for(int i=0; i<N; i++) {
			int ft;
			cin>>ft;
			s.insert(ft);
			// cin>>ftypes[i];
			ftypes[i]=ft;
		}
		int fsum[50] = {0};
		for(int i=0; i<N; i++) {
			cin>>fprice[i];
			fsum[ftypes[i]] = fsum[ftypes[i]] + fprice[i];
			fbaskt[ftypes[i]] = fsum[ftypes[i]];
		}
		
		int minimum = INT_MAX;
		for(set<int>::iterator it=s.begin(); it!=s.end(); it++) {
			int p=*it;
			minimum = min(minimum,fbaskt[p]);
		}
		// int minimum = *min_element(fbaskt,fbaskt+N);
		// for(set<int>::iterator it=s.begin(); it!=s.end(); ++it) {
			// int p = *it;

		// }
		cout<<minimum<<"\n";
		// cout<<"\n";
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