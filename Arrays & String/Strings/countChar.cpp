#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void countChar(string s) {
	char out[200];
	int l = s.length();

	int count = 0;
	int x = 0;
	int y = 1;
	for (int i = 0; i < l; i++) {
		for (int j = i + 1; j < l; j++) {
			if (s[i] == s[j]) {
				count++;
			}
		}
		out[x] = s[i];
		out[y] = count;
		count = 0;
		x += 2;
		y += 2;
	}

	for (int i = 0; i < y; i++) {
		cout << out[i];
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	countChar(s);

	return 0;
}

// input
// aaabbccds

// output
// a3b2c2d1s1