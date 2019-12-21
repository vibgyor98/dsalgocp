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

//Sum of child nodes
int replaceSum(node*root) {
	if(root==NULL) {
		return 0;
	}
	//for leaf nodes
	if(root->left==NULL && root->right==NULL) {
		return root->data;
	}

	int leftSum = replaceSum(root->left);
	int rightSum = replaceSum(root->right);

	int temp = root->data;
	root->data = leftSum + rightSum;

	return temp + root->data;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node *root = buildTree();
	bfs(root);
	cout<<endl;
	replaceSum(root);
	bfs(root);

	return 0;
}