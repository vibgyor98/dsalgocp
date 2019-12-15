#include<bits/stdc++.h>
using namespace std;

#define ll long long int

// int main() {

// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif

// 	int arr[1000];
// 	int cs[1000] = {0};
// 	int n;
// 	cin>>n;

// 	int curSum = 0;
// 	int maxSum = 0;
// 	int left,right = -1;

// 	cin>>arr[0];
// 	cs[0] = arr[0];

// 	for(int i=1; i<n; i++) {
// 		cin>>arr[i];
// 		cs[i] = cs[i-1] + arr[i];
// 	}

// 	//Brute_force approach
// 	// for(int i=0; i<n; i++) {
// 	// 	for(int j=i; j<n; j++) {

// 	// 		//Elements of i j
// 	// 		curSum = 0; 
// 	// 		for(int k=i; k<=j; k++) {
// 	// 			curSum += arr[k];	
// 	// 		}
// 	// 		// cout<<curSum<<" ";
// 	// 		//Update maxSum if curSum > maxSum
// 	// 		if(curSum > maxSum) {
// 	// 			maxSum = curSum;
// 	// 			left = i;
// 	// 			right = j;
// 	// 		} 
// 	// 	}
// 	// }

// 	//Cumulative Sum approach
// 	for(int i=0; i<n; i++) {
// 		for(int j=i; j<n; j++) {

// 			//logic
// 			curSum = 0;
// 			curSum = cs[j] - cs[i-1];

// 			//Update maxSum if curSum > maxSum
// 			if(curSum > maxSum) {
// 				maxSum = curSum;
// 				left = i;
// 				right = j;
// 			} 
// 		}
// 	}

// 	cout<<maxSum<<endl;
// 	for(int k=left; k<=right; k++) {
// 		cout<<arr[k]<<" ";
// 	}

// 	return 0;
// }

//Kadane's Algorithm for max Sub Array Sum
// int main() {

// 		#ifndef ONLINE_JUDGE
//  	freopen("input.txt", "r", stdin);
//  	freopen("output.txt", "w", stdout);
//  	#endif

//  	ll a[1000001];
// 	ll t;
// 	cin>>t;

// 	while(t--) {
// 		ll n;
// 		cin>>n;

// 		for(ll i=0; i<n; i++) {
// 			cin>>a[i];
// 		}

// 		//logic
// 		ll cs = 0, ms = 0;
// 		for(ll i=0; i<n; i++) {
// 			cs = cs + a[i];
// 			if(cs < 0) {
// 				cs = 0;
// 			}
// 			ms = max(cs,ms);
// 		}
// 		cout<<ms<<endl;
// 	}

// 	return 0;
// }

//Kadane's Algorithm best implementation
int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll a[1001];
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
        }

        ll best = 0, sum = 0;
        for(ll k =0; k<n; k++) {
            sum = max(a[k], sum+a[k]);
            best = max(best,sum);
        }cout<<best<<endl;
    }
	return 0;
}