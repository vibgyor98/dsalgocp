#include <iostream>
using namespace std;

#define ll long long 

void rotate(ll ar[][10001],int n) {
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
            if(i<j) {
                swap(ar[i][j],ar[j][i]);
            }
        }
    }
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ll ar[10001][10001];
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<n;j++) {
           cin>>ar[i][j];
        }
    }

    rotate(ar,n);
    for(ll i=n-1;i>=0;i--) {
        for(ll j=0;j<n;j++) {
           cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
    
    
         

//Input
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

//Output
// 4 8 12 16 
// 3 7 11 15 
// 2 6 10 14 
// 1 5 9 13 