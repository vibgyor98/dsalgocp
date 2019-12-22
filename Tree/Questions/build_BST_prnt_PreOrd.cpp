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

void preorder(node* root) {

	if(root==NULL) {
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

node* insertInBst(node* root, int data) {

	if(root==NULL) {
		return new node(data);
	}

	if(data <= root->data) {
		root->left = insertInBst(root->left,data);
	} else {
		root->right = insertInBst(root->right,data);
	}
	return root;
}

node* build() {
	
	int d;
	cin>>d;

	node* root = NULL;
	while(d!=-1) {
		root = insertInBst(root, d);
		cin>>d;
	}
	return root;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		node* root = build();
		preorder(root);
	}
	

	return 0;
}