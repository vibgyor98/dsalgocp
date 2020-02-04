#include <iostream>
using namespace std;

void permute(char *str, int i) {
	//base
	if(str[i]=='\0') {
		cout<<str<<" , ";
		return;
	}
	//recursive
	for(int j=i;str[j]!='\0';j++) {
		swap(str[i],str[j]);
		permute(str,i+1);
		//backtracking
		swap(str[i],str[j]);
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char str[100];
	cin>>str;

	permute(str,0);

	return 0;
}