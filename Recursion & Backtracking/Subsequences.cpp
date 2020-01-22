#include <iostream>
#include <vector>
#include <string>
using namespace std;
int count=0;
vector<string <char>> temp();
void subsequences(char *in, char *out, int i, int j) {
	//base 
	if(in[i]=='\0') {
		out[j]='\0';
		// cout<<out<<", ";
		string s=out;
		temp.push_back(s);
		count++;
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
	for(int i=count-1; i>=0; i--) {
		cout<<temp[i]<<" ";
	}
	cout<<endl;
	cout<<count;

	return 0;
}