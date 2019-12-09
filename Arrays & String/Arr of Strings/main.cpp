#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	char name[10][100];

	//for taking n strings as input
	int n;
	cin>>n;
	cin.ignore(); //to ignore the ENTER after n

	for(int i=0; i<n; i++) {
		cin.getline(name[i],100); //name[i] -> ith string
	} // name[i][j] -> jth character of ith string

	//output the taken strings
	// for(int i=0; i<n; i++) {
	// 	cout<<name[i]<<endl;
	// }

	//Search a string in the list
	char sName[100];
	cin.getline(sName, 100);

	//Linear Search
	int p;
	for(p=0; p<n; ++p) {
		if(strcmp(sName,name[p])==0) {
			cout<<"Name found at "<<++p<<"th position";
			break;
		}
	}
	if(p==n) cout<<"Name does not exit";

	return 0;
}