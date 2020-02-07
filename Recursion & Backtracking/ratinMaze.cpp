#include <iostream>
using namespace std;

bool ratinmaze(int R, int C, char maze[][C], int sol[R][C], int i, int j, int m, int n) {
	if(i==m && j==n) {
		sol[m][n]=1;
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	//Rat should be inside grid
	if(i>m || j>n) {
		return false;
	}
	if(maze[i][j]=='X') {
		return false;
	}

	//Assume solution exsits through current cell
	sol[i][j]=1;
	bool rhtSuccess = ratinmaze(R,C,maze,sol,i,j+1,m,n);
	bool dwnSuccess = ratinmaze(R,C,maze,sol,i+1,j,m,n);
	sol[i][j]=0;
	if(rhtSuccess || dwnSuccess) {
		return true;
	}
	return false;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int R,C;
	cin>>R>>C;

	//build the maze
	char maze[R][C];
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			cin>>maze[i][j];
		}
	}

	int sol[R][C] = {0};
	bool ans = ratinmaze(R,C,maze,sol,0,0,R-1,C-1);
	if(ans==false) {
		cout<<"Path doesn't exist! ";
	}

	return 0;
}