#include <iostream>
using namespace std;


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int s, w[3], cnt1=0, ans=0, total=0;
		cin>>s;
		for(int i=0; i<3; i++) {
			cin>>w[i];
			if(w[i]==1) {
			    cnt1++;
			}
		}
		if(s==1) {
		    cout<<cnt1<<endl;
		} else {
		    for(int i=0; i<3; i++) {
		        total=total+w[i];
		        if(total>s) {
		            ans++;
		            total=w[i];
		        }
		    }
		    ans++;
		    cout<<ans<<endl;
		}
	}
	return 0;
}

//Input
// 3
// 3 1 2 2
// 2 1 1 1
// 3 2 2 1

//Output
// 2
// 2
// 2