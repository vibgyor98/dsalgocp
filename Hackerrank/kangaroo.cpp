#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if(x1<x2 && v2>v1) cout<<"NO";
	if(x1<x2 && v1>v2) {
		for(int i=x1,j=x2;;i+=v1,j+=v2) {
			if(i%j==0) {
				cout<<"YES";
				break;
			} else continue;
		}
	}

	return 0;
}