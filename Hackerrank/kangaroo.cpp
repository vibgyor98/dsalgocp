#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;

	if(x2>x1 && v2>v1) cout<<"NO";
	else {
		for(int i=0; i<10000; i++) {
			x1+=v1;
			x2+=v2;
			if(x1==x2) cout<<"YES";
			break;
		}
		cout<<"NO";
	}

	return 0;
}