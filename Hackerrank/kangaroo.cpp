#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if((x1-x2)%(v2-v1)==0) cout<<"YES";
	else cout<<"NO";

	return 0;
}