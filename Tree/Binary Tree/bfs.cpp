#include <bits/stdc++.h>
using namespace std;

class node {
public:

	int data;
	node *left;
	node *right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* buildTree() {
	int d;
	cin>>d;

	if(d==-1) {
		return NULL;
	}

	node *root = new node(d);
	root -> left = buildTree();
	root -> right = buildTree();

	return root;
}

// BFS (Breadth First Search) -> Level Order
// void bfs(node* root) {

// 	queue<node*>q;
// 	q.push(root);

// 	while(!q.empty()) {
// 		node* f = q.front();
// 		cout<<f->data<<" ";
// 		q.pop();

// 		if(f->left) {
// 			q.push(f->left);
// 		}
// 		if(f -> right) {
// 			q.push(f -> right);
// 		}
// 	}
// 	return;
// }

//modified BFS for Vertical way of Output
void bfs(node* root) {

	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* f = q.front();
		if(f==NULL) {
			cout<<endl;
			q.pop();
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout<<f->data<<" ";
			q.pop();

			if(f->left) {
				q.push(f->left);
			}
			if(f -> right) {
				q.push(f -> right);
			}
		}
	}
	return;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node *root = buildTree();
	bfs(root);
	

	return 0;
}