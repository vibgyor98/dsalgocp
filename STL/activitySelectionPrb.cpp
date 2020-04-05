#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<int, int>&x, const pair<int, int>&y) {
	return x.second < y.second;
}

int solve(vector<pair<int, int>>v) {
	vector<pair<int, int>>::iterator it1;
	vector<pair<int, int>>::iterator it2;
	int cnt = 1;

	for (it1 = v.begin(), it2 = v.begin() + 1; it2 != v.end(); ++it2) {
		if (it2->first >= it1->second) {
			it1 = it2;
			cnt++;
		}
	}
	return cnt;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int>>v;
		int s, e;
		for (int i = 0; i < n; i++) {
			cin >> s >> e;
			v.push_back(make_pair(s, e));
		}
		sort(v.begin(), v.end(), comp);
		cout << solve(v) << "\n";
	}

	return 0;
}

// input
// 1
// 3
// 10 20
// 12 15
// 20 30

// output
// 2

// Explanation
// Person only do 0th and 2nd activities.