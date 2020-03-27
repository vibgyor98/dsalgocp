#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	//Array needs to be sorted 
	int a[] = {1,3,5,7,10,11,12,13,13};
	int s=16;

	//Two pointer approach
	int i = 0;
	int j = sizeof(a)/sizeof(int) - 1;
	while(i<j) {
		int currSum = a[i]+a[j];
		if(currSum>s) j--;
		else if(currSum<s) i++;
		else if(currSum==s) {
			cout<<a[i]<<" and "<<a[j]<<"\n";
			i++;
			j--;
		}
	}


	return 0;
}


// input
// 16

// output
// 3 and 13
// 5 and 11