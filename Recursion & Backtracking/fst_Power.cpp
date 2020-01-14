#include <iostream>
using namespace std;

int fstPow(int a, int b) {

	if(b==0) {
		return 1;
	} else {
		return a*fstPow(a, b-1);
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a,b;
	cin>>a>>b;
	cout<<fstPow(a,b);

	return 0;
}