#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	char ch = 'A';
	cin>>n;
	cout<<n<<endl;

	//proint the address of n
	cout <<&n<<endl;

	//pointers doesn't work for character
	cout<<&ch<<endl;
	//Explicit typecasting from char* to void*
	cout<<(void *)&ch<<endl;

	//pointer variable
	int *xptr;
	int x=1;
	//Stores the address of the particular variable
	xptr = &x;

	//both output will be same
	cout<<&x<<endl;
	cout<<xptr<<endl;

	//Value at address (derefence operator)
	cout<<*xptr<<endl;
	// another syntax for dereference operator
	cout<<*(&n)<<endl;

	//Reassigning another address to the same pointer variable
	int z=0;
	xptr = &z;
	cout<<*xptr<<endl;
	cout<<xptr<<endl;



	return 0;
}