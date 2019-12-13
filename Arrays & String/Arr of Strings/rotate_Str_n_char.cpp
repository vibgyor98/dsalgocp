#include<bits/stdc++.h>
using namespace std;

void rotate(char *a, int k) {

	int i = strlen(a);
	while(i>=0) {
		a[i+k] = a[i];
		i--;
	}

	i = strlen(a);
	int j = i-k;
	int s = 0;

	while(j<i) {
		a[s] = a[j];
		s++;
		j++;
	}

	a[i-k] = '\0';
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char a[100];
	int k;

	cin.getline(a,100);
	cin>>k;

	rotate(a,k);
	cout<<a<<endl;


	return 0;
}