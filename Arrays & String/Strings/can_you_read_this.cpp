#include <iostream>
#include <cstring>
using namespace std;

void convert(char *str) {

	int len = strlen(str);
	int i=0;
	for(; i<len; i++) {
		if(i==0 && str[i]>='A' && str[i]<='Z') {
			cout<<str[i];
		} else if (str[i]>='a' && str[i]<='z') {
			cout<<str[i];
		} else if(str[i]>='A' && str[i]<='Z') {
			cout<<endl;
			cout<<str[i];
		}
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char str[10001];
	cin>>str;
	convert(str);

	return 0;
}

//Input
// IAmACompetitiveProgrammer

//Output
// I
// Am
// A
// Competitive
// Programmer