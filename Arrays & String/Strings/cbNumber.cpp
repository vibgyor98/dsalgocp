#include <iostream>
#include <cstring>
using namespace std;

bool isCB(long long sub) {
	if (sub == 0 || sub == 1) return false;
	int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	for (int i = 0; i < 10; i++) {
		if (sub == prime[i]) return true;
	}
	for (int i = 0; i < 10; i++) {
		if (sub % prime[i] == 0) return false;
	}
	return true;
}

bool isValid(bool visited[17], string str, int start, int end) {
	for (int i = start; i < end; i++) {
		if (visited[i]) return false;
	}
	return true;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, cnt = 0;
	cin >> n;
	string s;
	cin >> s;
	int l = s.length();
	bool visited[l];

	for (int k = 0; k < l; k++) {
		visited[k] = false;
	}
	for (int len = 1; len < l; len++) {
		for (int start = 0; start <= l; start++) {
			int end = start + len;
			string sub = s.substr(start, len);
			if (isCB(stoll(sub)) && isValid(visited, sub, start, end)) {
				cnt++;
				for (int i = start; i < end; i++) {
					visited[i] = true;
				}
			}
		}
	}
	cout << cnt;

	return 0;
}

// constraints
// 1 <= Length of strings of digits <= 17

// input
// 5
// 81615

// output
// 2

// Explanation
// 61 and 5 are two CB numbers.