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

void print_Post_Order(node *root) {
	if(root==NULL) {
		return;
	}
	print_Post_Order(root->left);
	print_Post_Order(root->right);
	cout<<root->data<<" ";
}

void print_InOrder(node *root) {
	if(root==NULL) {
		return;
	}
	print_InOrder(root->left);
	cout<<root->data<<" ";
	print_InOrder(root->right);
}

void print_PreOrder(node *root) {

	if(root==NULL) {
		return;
	}

	cout<<root -> data<<" ";
	print_PreOrder(root->left);
	print_PreOrder(root->right);
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
	print_PreOrder(root);
	cout<<endl;
	print_InOrder(root);
	cout<<endl;
	print_Post_Order(root);

	return 0;
}