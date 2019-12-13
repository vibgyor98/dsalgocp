#include <bits/stdc++.h>
using namespace std;

void print_Pair(int *a, int N, int target) {
    int l = 0;
    int r = N-1;
    while(l<r) {
        if(a[l] + a[r] == target) {
            cout<<a[l]<<" and "<<a[r];
            cout<<endl;
            r--;//crucial step
        } else if (a[l] + a[r] < target) { // crucial step
            l++;
        } else {
            r--;
        }
    }
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a[1000];
    int N;
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>a[i];
    }
    int target;
    cin>>target;
    sort(a,a+N);
    print_Pair(a,N,target);

	return 0;
}