#include <iostream>
using namespace std;

#define ll long long int

//Maximum it can handle power of 30 -> 2,30
//Beyond that, use DP
int fstPow(int a, int b) {
	if(b==0) return 1;

	ll ans = fstPow(a,b/2);
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