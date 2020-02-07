#include <iostream>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n) {
	//chk for cols
	for(int row=0; row<i; row++) {
		if(board[row][j]==1) {
			return false;
		}
	}
	//chk for lft diagonal
	int x=i;
	int y=j;
	while(x>=0 && y>=0) {
		if(board[x][y]==1) {
			return false;
		}
		x--;
		y--;
	}
	//chk for rht diagonal
	x=i;
	y=j;
	while(x>=0 && y<n) {
		if(board[x][y]==1) {
			return false;
		}
		x--;
		y++;
	}
	return true;
}

bool solveNQueen(int board[][10], int i, int n) {
	//base case
	if(i==n) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(board[i][j]==1) {
					cout<<"Q ";
				} else {
					cout<<"* ";
				}
			}
			cout<<endl;
		}
		cout<<endl<<endl;
		return false;
	}

	//Recursive case
	for(int j=0; j<n; j++) {
		//chk i,j pos is safe for plc Q
		if(isSafe(board,i,j,n)) {
			board[i][j]=1;
			bool nextQPossible = solveNQueen(board,i+1,n);
			if(nextQPossible) {
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	int board[10][10] = {0};
	solveNQueen(board,0,n);

	return 0;
}