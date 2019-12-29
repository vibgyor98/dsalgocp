#include <iostream>
using namespace std;

void character(char ch) {

	int val = (int)ch;
	if(val>=65 && val<=90) {
		for(int i=val; i<=91; i++) {
			if(val==i) {
				cout<<"U";
				break;
			}
		}
	} else if(val>=97 && val<=122) {
		for(int i=val; i<=122; i++) {
			if(val==i) {
				cout<<"L";
				break;
			}
		}
	} else {
		cout<<"I";
	}
}

int main() {


	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char ch;
	cin>>ch;
	character(ch);

	return 0;
}

