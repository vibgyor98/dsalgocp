#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

//extracting strings while countering space 
string extractStrAtKey(string str, int key) {
	char *s = strtok((char *)str.c_str(), " ");
	while(key>1) {
		s = strtok(NULL," ");
		key--;
	}
	return (string)s;
}

//convert string to int
int convertToInt(string s) {
	int ans = 0;
	int p = 1;
	for(int i=s.length()-1; i>=0; i--) {
		ans += ((s[i] - '0') * p);
		p = p * 10;
	}
	return ans;
}

//numeric compare
bool numericCompare(pair<string,string>s1, pair<string,string>s2) {
	string key1,key2;
	key1 = s1.second;
	key2 = s1.second;

	return convertToInt(key1) < convertToInt(key2);
}

//lexiographical compare
bool numericCompare(pair<string,string>s1, pair<string,string>s2) {
	string key1,key2;
	key1 = s1.second;
	key2 = s1.second;

	return key1 < key2;
}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	cin.get();

	string a[n];
	for(int i=0; i<n; i++) {
		getline(cin,a[i]);
	}

	int key;
	string reversal, ordering;
	cin>>key>>reversal>>ordering;

	//Extract tokens in pair
	pair<string,string>strpair[n];
	for(int i=0; i<n; i++) {
		strpair[i].first = a[i];
		strpair[i].second = extractStrAtKey(a[i], key);
	}

	//check ordering
	if(ordering == numeric) {
		sort(strpair, strpair+n, numericCompare);
	} else {
		sort(strpair, strpair+n, lexioCompare);
	}

	//check reversal
	if(reversal == true) {
		for(int i=0; i<n/2; i++) {
			swap(strpair[i], strpair[n - i - 1]);
		}
	}

	//print output
	for(int i=0; i<n; i++) {
		cout<<strpair[i].first<<" ";
	}

	return 0;
}

// input
// 3
// 92 022
// 82 12
// 77 13
// 2 false numeric

// output
// 82 12
// 77 13
// 92 022