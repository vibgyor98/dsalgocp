#include <iostream>
#include <map>
#include <list>
#include <queue>

using namespace std;

template <typename T>
class Graph {
	map<T, list<T>> adjList;
public:
	Graph(){}

	void addEdge(T u, T v, bool bidir=true) {
		adjList[u].push_back(v);
		if(bidir) {
			adjList[v].push_back(u);
		}
	}

	void print() {
		for(auto i: adjList) {
			cout<<i.first<<"-->";
			for(auto entry: i.second) {
				cout<<entry<<" , ";
			}
			cout<<endl;
		}
	}

	void bfs(T src) {
		queue<T> q;
		map<T, int> dist;
		map<T, T> parent;

		for(auto i: adjList) {
			dist[i.first] = INT_MAX;
		}

		q.push(src);
		dist[src] = 0;
		parent[src] = src;

		while(!q.empty()) {
			T node = q.front();
			cout<<node<<" , ";
			q.pop();

			for(int neighbour: adjList[node]) {
				if(dist[neighbour]==INT_MAX) {
					q.push(neighbour);
					dist[neighbour] = dist[node] + 1;
					parent[neighbour] = node;
				}
			}
		}
		cout<<endl;
		//print the distances to all the nodes
		for(auto i: adjList) {
			T node = i.first;
			cout<<"Dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
		}
	}

};

int main() {


	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(3,4);

	g.bfs(0);

	return 0;
}

//Output
// 0 , 1 , 4 , 2 , 3 , 5 , 