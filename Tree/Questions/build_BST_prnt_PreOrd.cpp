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

void preorder(node *root) {
	if(root==NULL) {
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

//buil balance tree from Array
node* build_Balance_Tree(int *a, int s, int e) {

	if(s>e) {
		return NULL;
	}

	int mid = (s+e)/2;
	node*root = new node(a[mid]);
	root->left = build_Balance_Tree(a,s,mid-1);
	root->right = build_Balance_Tree(a,mid+1,e);

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

		node *root = build_Balance_Tree(a,0,size-1);
		preorder(root);
	}

	return 0;
}