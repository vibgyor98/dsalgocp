#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	int D1, V1, D2, V2, P;
	cin >> D1 >> V1 >> D2 >> V2 >> P;

	int sumP = 0, cnt = 0;
	if(D1 == D2) {
		sumP = V1 + V2;
		while(sumP <= P) {
			cnt++;
			sumP += sumP;
		}
		cout << cnt + 1;

	} else if(D1 > D2) {
		int add = V1 + V2;
		for(int i = D2; i < D1; i++) {
			sumP += V2;
			cnt++;
		}
		while(sumP <= P) {
			sumP += add;
			cnt++;
		}
		cout << cnt;
	} else {
		int add = V1 + V2;
		for(int i = D1; i < D2; i++) {
			sumP += V1;
			cnt++;
		}
		while(sumP <= P) {
			sumP += add;
			cnt++;
		}
		cout << cnt;
	}

	return 0;
}