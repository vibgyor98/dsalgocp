#include <iostream>
#include <string>
using namespace std;

void solve(string s, int len) {
	string ans;
	for(int i = 0; i < len; i++) {
		char a = s[i], res;
		int ascii;
		if(a == 'x') ans += 'a';
		else if(a == 'y') ans += 'b';
		else if(a == 'z') ans += 'c';
		else {
			ascii = int(a);
			res = ascii + 3;
			ans += (char)res;
		}
	}
	cout << ans;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	int len = s.length();
	solve(s,len);

	return 0;
}