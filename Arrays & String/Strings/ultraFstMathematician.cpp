#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s1, s2, s3 = "";
    int t;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == s2[i]) s3.append("0");
            else s3.append("1");
        }
        cout << s3 << endl;
        s3 = "";
    }
    return 0;
}

// input
// 1
// 10111 10000

// output
// 00111
