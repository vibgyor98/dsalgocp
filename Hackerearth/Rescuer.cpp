#include <bits/stdc++.h>
using namespace std;

float dist(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2-x1,2) + pow(y2-y1,2) * 1.0);
}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int x1, y1, x2, y2, v1, v2;
	x1 = 3;
	y1 = -20;
	x2 = 3;
	y2 = 25;
	v1 = 40;
	v2 = 5;

	double distance = dist(x1,y1,x2,y2);
	double tm1 = distance/v1;
	double tm2 = distance/v2;

	double totalTm = (tm1*tm2)/2;

	cout<<distance<<endl;
	cout<<tm1<<endl;
	cout<<tm2<<endl;
	cout<<totalTm<<endl;
	

	return 0;
}