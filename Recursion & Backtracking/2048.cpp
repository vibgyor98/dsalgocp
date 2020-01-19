#include <iostream>
using namespace std;

char spellings[][10] = { "zero", "one", "two", "three", "four", "five",
						 "six", "seven", "eight", "nine" };

//print l -> r
void lrprint(int n) {
	if(n==0) return;

	lrprint(n/10);
	cout<<spellings[n%10]<<" ";
}

//print r-> l
void rlprint(int n) {
	if(n==0) return;

	cout<<spellings[n%10]<<" ";
	rlprint(n/10);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	lrprint(n);
	cout<<endl;
	rlprint(n);

	return 0;
}
