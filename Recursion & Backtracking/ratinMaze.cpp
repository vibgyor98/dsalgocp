#include <iostream>
using namespace std;

bool isVisited[1001][1001], sol[1001][1001];
bool ratinmaze(char maze[][1001], int i, int j, int m, int n) {
	if(i==m && j==n) {
		sol[i][j]=1;
		for(int x=0; x<=m; x++) {
			for(int y=0; y<=n; y++) {
				cout<<sol[x][y]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	if(isVisited[i][j]) return false;

	//Assume solution exsits through current cell
	isVisited[i][j]=1;
	sol[i][j]=1;
	if(j+1<=n && !isVisited[i][j+1]) {
		bool rhtSuccess = ratinmaze(maze,i,j+1,m,n);
		if(rhtSuccess) return true;
	}
	if(i+1<=m && !isVisited[i+1][j]) {
		bool dwnSuccess = ratinmaze(maze,i+1,j,m,n);
		if(dwnSuccess) return true;
	}
	sol[i][j]=0;
	return false;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	//build the maze
	char maze[1001][1001];
	int m,n;
	cin>>m>>n;
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cin>>maze[i][j];
			if(maze[i][j]=='X') isVisited[i][j]=1;
		}
	}
	m--;
	n--;

	int ans = ratinmaze(maze,0,0,m,n);
	if(ans==false) {
		cout<<"-1";
	}

	return 0;
}