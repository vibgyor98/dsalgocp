#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int M[1000], N[1000];
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> M[i];
    }
    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> N[j];
    }

    //Addition
    int carry[10001], idx = 0;
    int i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0) {
        carry[idx] = (N[i] + M[j]) % 10;
        idx++;
        if (N[i] + M[j] >= 10) {
            if (i - 1 >= 0) {
                N[i - 1] += 1;
            } else if (j - 1 >= 0) {
                M[j - 1] += 1;
            } else {
                carry[idx] = 1;
                idx++;
            }
        }
        i--; j--;
    }

    //handling array idx out of bound
    if (i >= 0) {
        while (i >= 0) {
            carry[idx] = N[i] % 10;
            idx++;
            if (N[i] >= 10) {
                if (i - 1 >= 0) {
                    N[i - 1] += 1;
                } else {
                    carry[idx] = 1;
                    idx++;
                }
            }
            i--;
        }
    }
    if (j >= 0) {
        while (j >= 0) {
            carry[idx] = M[j] % 10;
            idx++;
            if (M[j] >= 10) {
                if (j - 1 >= 0) {
                    M[j - 1] += 1;
                } else {
                    carry[idx] = 1;
                    idx++;
                }
            }
            j--;
        }
    }

    //output
    for (int i = idx - 1; i >= 0; i--) {
        cout << carry[i] << ", ";
    }
    cout << "END";


    return 0;
}

// input
// 4
// 1 0 2 9
// 5
// 3 4 5 6 7

// output
// 3, 5, 5, 9, 6, END