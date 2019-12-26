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

//Insert in bst
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

bool isBST(node* root, int minV = INT_MIN, int maxV = INT_MAX) {

	if(root==NULL) {
		return true;
	}

	if(root->data >= minV && root->data <= maxV &&
		isBST(root->left,minV,root->data) &&
		isBST(root->right,root->data,maxV)) {
		return true;
	}

	return false;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node* root = build();
	if(isBST(root)) {
		cout<<"YES The tree is BST";
	} else {
		cout<<"NO The tree is not BST";
	}
	

	return 0;
}