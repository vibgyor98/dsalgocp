#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if(a.find(b)==0 || b.find(a)==0) {
		return a.length() > b.length();
	}
	return a<b;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++)
		cin>>s[i];

	sort(s,s+n,compare);

	for(int i=0; i<n; i++) {
		cout<<s[i]<<endl;
	}

	return 0;
}

//Input
// 3	-> size of array
// bat
// apple
// batman

//Output
// apple
// batman
// bat