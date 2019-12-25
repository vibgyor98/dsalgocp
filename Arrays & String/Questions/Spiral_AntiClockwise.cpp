#include <bits/stdc++.h>
using namespace std;

void readMatrix(int a[][10], int r, int c) {
	int value = 1;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin>>a[i][j];
		}
	}
}

void spiral_AnticlockWise(int a[][10], int r, int c) {

	int startRow = 0, endRow = r-1, startCol = 0, endCol = c-1;

	while(startRow <= endRow && startCol <= endCol) {

		//print start col
		if(startCol < endCol) {
			for(int i=startRow; i<=endRow; i++) {
				cout<<a[i][startCol]<<", ";
			}
			startCol++;
		}

		//print end row
		if(endRow > startRow) {
			for(int j=startCol; j<=endCol; j++) {
				cout<<a[endRow][j]<<", ";
			}
			endRow--;
		}

		//print end col
		for(int i=endRow; i>=startRow; i--) {
			cout<<a[i][endCol]<<", ";
		}
		endCol--;

		//print start row
		for(int j=endCol; j>=startCol; j--) {
			cout<<a[startRow][j]<<", ";
		}
		startRow++;
	}
}

// //Clock_wise
// void spiral_Clockwise(int a[][10], int r, int c) {
	
// 	int start_row=0, end_row=r-1, start_col=0, end_col=c-1;

// 	while(start_row <= end_row && start_col <= end_col) {
		
// 		//print start row
// 		for(int j=start_col; j<=end_col; j++) {
// 			cout<<a[start_row][j]<<" ";
// 		}
// 		start_row++;

// 		//print end col
// 		for(int i=start_row; i<=end_row; i++) {
// 			cout<<a[i][end_col]<<" ";
// 		}
// 		end_col--;

// 		//print end row
// 		if(end_row > start_row) {
// 			for(int j=end_col; j>=start_col; j--) {
// 				cout<<a[end_row][j]<<" ";
// 			}
// 			end_row--;
// 		}

// 		//print start col
// 		if(start_col < end_col) {
// 			for(int i=end_row; i>=start_row; i--) {
// 				cout<<a[i][start_col]<<" ";
// 			}
// 			start_col++;
// 		}
// 	}
// }

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[10][10];
	int r,c;
	cin>>r>>c;
	readMatrix(a,r,c);

	// spiral_Clockwise(a,r,c);
	// cout<<endl;
	spiral_AnticlockWise(a,r,c);
	// cout<<"END";
	
	return 0;
}