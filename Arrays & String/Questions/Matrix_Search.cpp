#include <iostream>
using namespace std;

void matrix_Search(int a[][10], int r, int c, int key) {

    int i=0,j=c-1;
    while(i<r&&j>=0) {
        if(a[i][j]==key) {
            cout<<"1";
            return;
        } else if(a[i][j]>key) {
            j--;
        } else {
            i++;
        }
    }
    cout<<"0";
    return;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int a[10][10];
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    int e;
    cin>>e;

    matrix_Search(a,n,m,e);
    return 0;
}
    
    
         

//Input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62


//Output
//0
