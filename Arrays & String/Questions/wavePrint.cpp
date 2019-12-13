#include <bits/stdc++.h>
using namespace std;

void readMatrix(int a[][10], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>a[i][j];
        }
    }
}

void printWave(int a[][10], int r, int c) {
    for(int j=0; j<c; j++) {
        if(j&1) {
            for(int i=r-1; i>=0;i--) {
                cout<<a[i][j]<<","<<" ";
            }
        } else {
            for(int i=0; i<r; i++) {
                cout<<a[i][j]<<","<<" ";
            }
        }
    } cout<<"END";
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int a[10][10];
    int r,c;
    cin>>r>>c;

    readMatrix(a,r,c);
    printWave(a,r,c);

    return 0;
}