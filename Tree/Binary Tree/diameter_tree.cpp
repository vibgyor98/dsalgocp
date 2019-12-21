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

int height(node* root) {
	if(root==NULL) {
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);

	return max(ls,rs)+1;
}

//Brute Force approach
// int diameter(node* root) {
	
// 	if(root==NULL) {
// 		return 0;
// 	}

// 	int h1 = height(root->left);
// 	int h2 = height(root->right);

// 	//if the diameter passes through root
// 	int op1 = h1+h2;
// 	//if diameter passes through left sub tree
// 	int op2 = diameter(root->left);
// 	//if diameter passes through right sub tree
// 	int op3 = diameter(root->right);

// 	return max(op1, max(op2,op3));
// }

class Pair {
public:
	int height;
	int diameter;
};

//Optimized approach
Pair fstDiameter(node* root) {
	
	Pair p;
	if(root==NULL) {
		p.diameter=p.height=0;
		return p;
	}
	
	Pair left = fstDiameter(root->left);
	Pair right = fstDiameter(root->right);

	p.height=max(left.height,right.height)+1;
	p.diameter=max(left.height + right.height, max(left.diameter,right.diameter));
	
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
	Pair p = fstDiameter(root);
	cout<<p.height<<endl;
	cout<<p.diameter<<endl;

	return 0;
}