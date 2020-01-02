#include <iostream>
using namespace std;

#define ll long long int

//checking correct configuration
bool ok(ll *books, ll n, ll m, ll ans) {
	int student = 1;
	ll current_pages = 0;
	for(ll i=0; i<n; i++) {
		if(current_pages+books[i]>ans) {
			current_pages = books[i];
			student++;
			if(student>m) {
				return false;
			}
		} else {
			current_pages += books[i];
		}
	}
	return true;
}

//Search pages
ll searchBooks(ll *books, ll n, ll m) {
	ll totalPages = 0;
	// ll s=0;
	ll s = books[n-1]; 
	for(ll i=0; i<n; i++) {
		totalPages += books[i];
		// s = max(s, books[i]);
		//Each std will atleast 1 book
		//Books having max pages will be the min ans
	}
	ll e=totalPages;
	ll finalAns = s;

	while(s<=e) {
		ll mid = s+(e-s)/2;
		if(ok(books,n,m,mid)) {
			//search in the left part
			finalAns = mid;
			e=mid-1;
		} else {
			//search in the right part
			s=mid+1;
		}
	}
	return finalAns;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		ll n,m;
		cin>>n>>m;
		ll books[n];
		for(ll i=0; i<n; i++)
			cin>>books[i];
		cout<<searchBooks(books,n,m);
	}
	
	
	return 0;
}

//Input
// 1
// 4 2
// 12 34 67 90

//Output
// 113
