#include <iostream>
#include <cstring>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;
	int len = s.length();

	int j=1;
	for(int i=0; i<len-1; i++) {
		cout<<s[i]<<(int)s[j]-(int)s[i];
		j++;
	}
	cout<<s[len-1];


	return 0;
}