#include <iostream>
using namespace std;

#define ll long long

//Sieve approach generate an array containing prime num
void prime_Sieve(int *p) {
	//first mark all odd numbers prime
	for(int i=3; i<=100000; i+=2) {
		p[i] = 1;
	}
	//Sieve
	for(ll i=3; i<=1000000; i+=2) {
		//if the current number is not marked (it is prime)
		if(p[i]==1) {
			//mark all the multiples of i as not prime
			for(ll j=i*i; j<=1000000; j=j+i) {
				p[j]=0;
			}
		}
	}
	//special case
	p[2]=1;
	p[0]=p[1]=0;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	//actually this is a boolean array
	int p[1000005] = {0};
	prime_Sieve(p);
	int csum[1000005] = {0};
	//precompute the primes upto an index 1
	for(int i=1; i<=1000000; i++) {
		csum[i] = csum[i-1] + p[i];
	}
	int t;
	cin>>t;
	while(t--) {
		int p,q;
		cin>>p>>q;
		cout<<csum[q]-csum[p-1]<<endl;
	}

	return 0;
}

//Constrains
// a<=1000000 & b<=1000000.
// N<=1000

//input
// 2
// 1 10
// 11 20

//output
// 4
// 4