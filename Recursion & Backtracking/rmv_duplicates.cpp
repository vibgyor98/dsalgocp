#include <iostream>
using namespace std;

char output[1001];
int k=0;

void find(char *in, int i) {
	if(in[i]=='\0') {
		output[k]='\0';
		return;
	}

	int j=i;
	output[k++]=in[i];
	while(in[j] && in[j]==in[i]) j++;

	find(in,j);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char in[1001];
	cin>>in;

	find(in,0);
	cout<<output;

	return 0;
}