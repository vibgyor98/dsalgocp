#include <iostream>
#include <cstring>
using namespace std;

void find(char *s, int i) {
	//base
	if(i==strlen(s)) {
		return;
	}
	//recursive
	if(s[i]==s[i+1]) {
		for(int j=strlen(s); j>i; j--) {
			s[j]=s[j-1];
		}
		s[i+1]='*';
	}
	find(s,i+1);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char in[2000];
	cin>>in;

	find(in,0);
	cout<<in;

	return 0;
}