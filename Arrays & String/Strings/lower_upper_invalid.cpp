#include <iostream>
using namespace std;


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char ch;
	cin>>ch;

	if((int)ch>=97 && (int)ch<=122) 
		cout<<"lowercase";
	if((int)ch>=65 && (int)ch<=90) 
		cout<<"UPPERCASE";

	int a = (int)ch;
	int count=0;
	for(int i=0; i<64; i++) {
		if(a==i) {
			cout<<"Invalid";
			break;
		}
		count++;
		if(count==63) {
			for(int j=91; j<96; j++) {
				if(a==j) {
					cout<<"Invalid";
					break;
				}
			}
		}
	}
	return 0;
}