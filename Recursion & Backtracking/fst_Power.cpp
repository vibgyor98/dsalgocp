#include <iostream>
using namespace std;

int fstPow(int a, int b) {
	if(b==0) return 1;

	int ans = fstPow(a,b/2);
	ans *= ans;
	if(b&1) return a*ans;

	return ans;
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