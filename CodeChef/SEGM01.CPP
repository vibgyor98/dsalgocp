#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	int okay = 1;
	while(t--) {
		string s;
		cin >> s;
		int len = s.length();
		int left = 0, right = len - 1;
		while(left <= right) {
			if(s[left] == s[right] && s[left] == '1') {
				okay = 1;
				left++;
				right--;
				continue;
			} else if(s[left] == s[right] && s[left] == '0') {
				okay = 1;
				continue;
				left++;
				right--;
			} else {
				okay = -1;
				break;
			}
		}
	}

	if(okay) cout <<"YES" <<"\n";
	else cout <<"NO" <<"\n";

	return 0;
}

/*

Input:
6
001111110
00110011
000
1111
101010101
101111111111

Output:
YES
NO
NO
YES
NO
NO

*/