#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

bool comp(pair<string, ll>p1, pair<string, ll>p2) {
	if (p1.second == p2.second) return p1.first < p2.first;
	else return p1.second > p2.second;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll minsalary, n;
	cin >> minsalary >> n;
	pair<string, ll> emp[n];
	string name;
	ll salary;
	for (int i = 0; i < n; i++) {
		cin >> name >> salary;
		emp[i].first = name;
		emp[i].second = salary;
	}
	sort(emp, emp + n, comp);
	for (int i = 0; i < n; i++) {
		if (emp[i].second >= minsalary) {
			cout << emp[i].first << " " << emp[i].second << "\n";
		}
	}

	return 0;
}

/*Constraints
1 <= N <= 10^5 1 <= | Length of the name | <= 100 1 <= x, salary <= 100

Output Format
You must print the required list.

Sample Input
79
4
Eve 78
Bob 99
Suzy 86
Alice 86

Sample Output
Bob 99
Alice 86
Suzy 86
*/