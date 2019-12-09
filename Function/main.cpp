#include<bits/stdc++.h>
using namespace std;

int fact(int num) {
	int ans = 1;
	for(int curNum = 1; curNum <= num; curNum++) {
		ans = ans * curNum;
	}
	return ans;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,r;
	cin>>n>>r;

	int a = fact(n);
	int b = fact(r);
	int c = fact(n-r);

	int ans = a / (b * c);
	cout<<ans;

	return 0;
}