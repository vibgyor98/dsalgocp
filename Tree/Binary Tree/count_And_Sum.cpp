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

//Count the nodes
// int count(node *root) {

// 	if(root==NULL) {
// 		return 0;
// 	}
// 	return 1+count(root->left)+count(root->right);
// }

int sum_of_Nodes(node *root) {

	if(root==NULL) {
		return 0;
	}
	return root->data+sum_of_Nodes(root->left)+sum_of_Nodes(root->right);
}

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

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node *root = buildTree();
	// cout<<count(root);
	cout<<sum_of_Nodes(root);

	return 0;
}