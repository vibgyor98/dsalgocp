#include <iostream>
#include <cstring>
using namespace std;

void rmvDup(char a[]) {
	int l = strlen(a);
	if(l==0 || l==1) return;
	int prev = 0;
	for(int curr=1; curr<l; curr++) {
		if(a[curr]!=a[prev]) {
			prev++;
			a[prev]=a[curr];
		}
	}
	a[prev+1]='\0';
	return;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	char a[100];
	cin.getline(a,100);

	rmvDup(a);
	cout<<a;

	return 0;
}

// input
// cooooodiiinngg

// output
// coding
