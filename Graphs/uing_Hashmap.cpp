#include <iostream>
#include <map>
#include <list>

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

};

int main() {


	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Graph<string> g;
	g.addEdge("putin","trump",false);
	g.addEdge("putin","Modi",false);
	g.addEdge("Modi","trump",true);
	g.addEdge("Modi","Yogi",true);
	g.addEdge("Yogi","Amit Shah",false);
	g.addEdge("Amit Shah","Modi",true);

	g.print();

	return 0;
}