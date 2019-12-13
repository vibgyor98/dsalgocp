#include<bits/stdc++.h>
using namespace std;

bool is_permutation(char *s1, char *s2) {

	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if(l1 != l2) return false;

	//check for permutation
	//check for frequency
	int freq[26] = {0};

	//iterate over s1
	for(int i = 0; i<l1; i++) {
		freq[s1[i]-'a']++;
	}
	//iterate over s2
	for(int i=0; i<l2; i++) {
		freq[s2[i]-'a']--;
	}

	//check if all frequency are zero
	for(int i=0; i<26; i++) {
		if(freq[i] != 0) {
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

	char s1[1001], s2[1001];
	cin.getline(s1,1001);
	cin.getline(s2,1001);

	if(is_permutation(s1, s2)) cout<<"Yes";
	else cout<<"No";

	return 0;
}