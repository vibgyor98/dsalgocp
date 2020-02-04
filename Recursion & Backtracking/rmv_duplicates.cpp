#include <iostream>
#include <cstring>
using namespace std;

void find(char *in, int i) {
	if(i==strlen(in)) return;
	if(in[i]==in[i+1]) {
		for(int j=strlen(in); j>i; j--) {
			in[j]=in[j-1];
		}
	}
	find(in,i+1);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char in[1001];
	cin>>in;

	find(in,0);
	cout<<in;

	return 0;
}