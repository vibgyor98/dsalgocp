#include <iostream>
using namespace std;

//binary Search First Occurance
//lowerBound
int first_Occ(int *a, int n, int key) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int m = s + (e - s) / 2;
		if (a[m] == key) {
			ans = m;
			e = m - 1;
		} else if (a[m] < key) {
			s = m + 1;
		} else {
			e = m - 1;
		}
	}
	return ans;
}

//binary Search Last Occurance
//Upper bound not exactly
int last_Occ(int *a, int n, int key) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int m = s + (e - s) / 2;
		if (a[m] == key) {
			ans = m;
			s = m + 1;
		} else if (a[m] < key) {
			s = m + 1;
		} else {
			e = m - 1;
		}
	}
	return ans;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int t;
	cin >> t;
	while (t--) {
		int key;
		cin >> key;
		cout << first_Occ(a, n, key) << " ";
		cout << last_Occ(a, n, key) << endl;
	}

	return 0;
}

//Input
// 5
// 1 2 3 3 4
// 3 -> no. of ele to be processed
// 2
// 3
// 10

//Output
// 1 1
// 2 3
// -1 -1
