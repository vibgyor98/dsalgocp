#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int k;
	cin >> k;
	string str;
	cin >> str;

	int freq[2] = {}; //since only a and b will be there in str
	int l = str.length();
	int ans = 0, left = 0;

	for (int i = 0; i < l; i++) {
		char temp = str[i];
		freq[temp - 'a']++;
		if (min(freq[0], freq[1]) > k) {
			freq[str[left] - 'a']--;
			left++;
		} else {
			ans++;
		}
	}

	cout << ans;

	return 0;
}

// input
// 2
// abba

// output
// 4