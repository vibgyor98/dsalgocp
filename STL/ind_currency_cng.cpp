#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a<=b;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int curr[] = {1,2,5,10,20,50,100,200,500,2000};
	int n = sizeof(curr)/sizeof(int);
	int cng,sum=0;
	cin>>cng;
	while(cng>0) {
		int lb = lower_bound(curr,curr+n,cng,compare)-curr-1;
		int m = curr[lb];
		sum+=m;
		cout<<m<<" ";
		cng=cng-m;
	} 
	cout<<"= "<<sum<<"\n";
	return 0;
}

//input
// 2113

//output
// 2000 100 10 2 1 = 2113
