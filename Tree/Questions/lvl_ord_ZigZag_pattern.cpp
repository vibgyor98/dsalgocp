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

int height(node* root) {
	if(root==NULL) {
		return 0;
	}

	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs)+1;
}

//for printing particular Kth level
void print_Kthlevel(node* root, int k) {

	int H = height(root);

	if(root==NULL) {
		return;
	}
	
	for(int i=1; i<=H; i++) {
		if(i&1) {
			print_Kthlevel(root->left, k-1);	
		} else {
			print_Kthlevel(root->right, k-1);
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
	print_Level_order(root);
	// print_Kthlevel(root,3);

	return 0;
}