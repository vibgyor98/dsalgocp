#include <iostream>
using namespace std;

void multiply(int *a, int &n, int no) {
	int carry = 0;
	for (int i = 0; i < n; i++) {
		int prod = a[i] * no + carry;
		a[i] = prod % 10;
		carry = prod / 10;
	}

	//left out carry
	while (carry) {
		a[n] = carry % 10;
		carry /= 10;
		n++;
	}
}

void big_fact(int num) {
	int *a = new int[1000] {};
	a[0] = 1;
	int n = 1;

	for (int i = 1; i <= num; i++) {
		multiply(a, n, i);
	}

	//print the digit in rev ord
	for (int i = n - 1; i >= 0; i--) {
		cout << a[i];
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	big_fact(n);

	return 0;
}

// input
// 5

// output
// 120