#include <iostream>
#include <algorithm>
using namespace std;

bool tell_Me(string a, string b) {

    string ab = a.append(b);
    string ba = b.append(a);

    return ab.compare(ba) > 0;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    while(t--) {
        int m;
        cin>>m;
        string s[m];
        for(int i=0;i<m;i++) {
            cin>>s[i];
        }

        sort(s,s+m,tell_Me);
        for(int i=0; i<m; i++) {
            cout<<s[i];
        }cout<<endl;
    } 
    return 0;
}
    
    
         

//Input
// 1
// 4
// 54 546 548 60

//Output
// 6054854654