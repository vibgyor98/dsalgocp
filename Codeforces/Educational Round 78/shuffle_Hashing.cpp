#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		string p,h;
		cin>>p>>h;
		sort(p.begin(),p.end());
		bool ok = false;
		for(int i=0; i<h.size(); i++) {
			string chk = h.substr(i, p.size());
			sort(chk.begin(),chk.end());
			if(p==chk) {
				ok = true;
				break;
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}