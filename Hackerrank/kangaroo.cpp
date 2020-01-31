#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if(v2>v1) cout<<"NO";
	else {
		int t1=x1*v1;
		int t2=x2*v2;
		if((t1&1)&&(t2&1)) cout<<"NO";
		else cout<<"YES";
	}

	return 0;
}