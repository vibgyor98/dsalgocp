#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isComposite(ll n) { 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return false; 
   
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return true; 
   
    for (ll i=5; i*i<=n; i=i+6) {
    	if (n%i == 0 || n%(i+2) == 0) {
    		return true;
    	}
    } 
   
    return false; 
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	ll a = 0;
	ll b = 0;
	while(n) {
		a+=n;
		if(isComposite(a)==true){
			b+=a;
			if(isComposite(b)==true) {
				if(b-a==n) {
					cout<<b<<" "<<a;
					break;
				}
			}
		}
	}

	return 0;
}