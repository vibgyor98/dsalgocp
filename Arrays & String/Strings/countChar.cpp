#include <iostream>
#include <cstring>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[100];
	cin >> a;
	int l = strlen(a);

	sort(a, a + l);

	char out[200];
	int x = 0;
	int y = 1;
	int p = -1;
	for (int i = 0; i < l; i++) {
		if (a[i] == a[i + 1]) {
			count++;
		}
		out[x] = a[i];
		out[y] = count;
	}

	return 0;
}

// input
// aaabbccds

// output
// a3b2c2d1s1