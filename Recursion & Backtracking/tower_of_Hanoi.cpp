#include <iostream>
using namespace std;



//1. move (n-1) disk from A to B
//2. shift Nth disk from A to C
//3. move (n-1) disk from B(helper) to C(destination)
void toh(int n, char src, char dest, char helper) {
	if(n==0) return;
	toh(n-1,src,helper,dest);
	cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;
	toh(n-1,helper,dest,src);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	toh(n,'A','C','B');

	return 0;
}