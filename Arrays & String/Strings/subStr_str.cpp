#include<bits/stdc++.h>
using namespace std;

void printSubStr(char *str) {
	for(int i=0; str[i] != '\0'; i++) {
		for(int j=i; str[j]!='\0'; j++) {
			for(int k=i; k<=j; k++) {
				cout<<str[k];
			}
			cout<<endl;
		}
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char str[1001];
	cin>>str;

	printSubStr(str);

	return 0;
}