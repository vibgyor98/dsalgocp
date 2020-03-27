#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char a[]) {
	int i=0;
	int j=strlen(a)-1;
	while(i<j) {
		if(a[i]==a[j]) {
			i++;
			j--;
		} else {
			return false;
		}
	}
	return true;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char a[100];
	cin.getline(a, 100);

	if(isPalindrome(a)) {
		cout<<"Is Palindrome";
	} else {
		cout<<"Not a Palindrome";
	}

	return 0;
}

//Input
// Sourav Kar
// madam

//Output
// Not a Palindrome
// Is Palindrome