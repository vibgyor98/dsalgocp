#include <iostream>
#include <cstring>
using namespace std;

// #define ASCII_SIZE 256

void count_freq(char *str) {

	int count[256] = {};
	int len = strlen(str);
	int max=0;
	char ans;
	for(int i=0; i<len; i++) {
		count[str[i]]++;
		if(max < count[str[i]]) {
			max = count[str[i]];
			ans = str[i];
		}
	}
	cout<<ans;
}

int main() {


	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char str[10001];
	cin>>str;
	count_freq(str);

	return 0;
}

