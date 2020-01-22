#include <iostream>
using namespace std;

int count=0;

void subsequences(char *in, char *out, int i, int j) {
	//base 
	if(in[i]=='\0') {
		out[j]='\0';
		count++;
		cout<<out<<", ";
		return;
	}
	//rec
	//1. include the current char
	out[j] = in[i];
	subsequences(in,out,i+1,j+1);
	//exclude the current char
	subsequences(in,out,i+1,j);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char in[100];
	cin>>in;

	char out[100];

	subsequences(in,out,0,0);
	cout<<endl;
	cout<<count;

	return 0;
}