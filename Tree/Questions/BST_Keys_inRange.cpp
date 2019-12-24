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

//printing nodes within range
void print_Node_inRange(node* root, int k1, int k2) {
	
	if(root==NULL) {
		return;
	}

	print_Node_inRange(root->left,k1,k2);
	if(root->data>=k1 && root->data<=k2) {
		cout<<root->data<<" ";
	} 
	print_Node_inRange(root->right,k1,k2);

	return;
}

//preorder traversal
void preorder(node* root) {

	if(root==NULL) {
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

//Build BST
node* build_BST(node* root, int d) {

	if(root==NULL) {
		node* root = new node(d);
		return root;
	}

	if(d > root->data) {
		root->right = build_BST(root->right, d);
	} else if(d < root->data) {
		root->left = build_BST(root->left, d);
	}
	return root;
}

//Arr to BST
node* Arr_to_BST(int *a, node* root, int n) {
	
	for(int i=0; i<n; i++) {
		root = build_BST(root, a[i]);
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
		int size;
		cin>>size;
		int a[size];
		for(int i=0; i<size; i++) {
			cin>>a[i];
		}
		
		int k1,k2;
		cin>>k1>>k2;
		
		node* root = new node(a[0]);
		Arr_to_BST(a,root,size);

		cout<<"# Preorder : ";
		preorder(root);
		cout<<endl;
		cout<<"# Nodes within range are : ";
		print_Node_inRange(root,k1,k2);
	}

	return 0;
}

//Input
// 1		 ->Test case
// 5		 ->Arr size
// 4 3 2 5 6 ->Arr ele
// 3 5		 ->k1 k2		

//output
// # Preorder : 4 3 2 5 6 
// # Nodes within range are : 3 4 5 