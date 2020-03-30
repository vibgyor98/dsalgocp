#include <iostream>
#include <cstring>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	char a[100];
	char ls[100];

	int len=0;
	int lrgLen=0;

	cin.get();
	for(int i=0; i<n; i++) {
		cin.getline(a,100);
		len=strlen(a);
		if(len>lrgLen) {
			lrgLen=len;
			strcpy(ls,a);
		}
	}

	cout<<ls<<"\n"<<lrgLen;


	return 0;
}

// input
// 3
// aa
// a1a 21a
// a21a2 1a212a1

// output
// a21a2 1a212a1
// 13