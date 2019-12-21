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

class HBPair {
public:
	int height;
	bool balance;
};

//checking the balance
HBPair isHeightBalance(node*root) {

	HBPair p;
	if(root==NULL) {
		p.height=0;
		p.balance=true;
		return p;
	}

	HBPair left = isHeightBalance(root->left);
	HBPair right = isHeightBalance(root->right);
	
	p.height = max(left.height,right.height)+1;
	
	if(abs(left.height - right.height)<=1 && left.balance && right.balance) {
		p.balance = true;
	} else {
		p.balance = false;
	}

	return p;
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
	if(isHeightBalance(root).balance) {
		cout<<"Tree is Balanced"<<endl;
	} else {
		cout<<"Tree is not Balanced"<<endl;
	}
	

	return 0;
}