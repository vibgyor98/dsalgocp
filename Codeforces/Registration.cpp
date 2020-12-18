#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	int t;
	cin >> t;
	unordered_map<string, int> mp;
	while(t--) {
		string str;
		cin >> str;
		
		if(mp.find(str) == mp.end()) {
			mp.insert(make_pair(str,1));
		} else {
			mp[str]++;
		}

		if(mp[str] == 1) {
			cout <<"OK" <<"\n";
		} else {
			cout <<str <<mp[str] - 1 <<"\n"; 
		}
	}

	return 0;
}

/*

Input:
6
first
first
second
second
third
third


Output:
OK
first1
OK
second1
OK
third1



*/