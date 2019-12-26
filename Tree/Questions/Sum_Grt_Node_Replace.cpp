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

//Build BST
node* buildBST(int *a, int s, int e) {

	if(s>e) {
		return NULL;
	}

	int mid = (s+e)/2;
	node* root = new node(a[mid]);
	root -> left = buildBST(a,s,mid-1);
	root -> right = buildBST(a,mid+1,e);

	return root;
}

//preorder Traversal
void preorder(node* root) {
	if(root==NULL) {
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

//Replacing Nodes
void replace_Nodes(node* root, int *sum) {

	if(root==NULL) {
		return;
	}

	replace_Nodes(root->right,sum);
	*sum = *sum + root->data;
	root->data = *sum;
	replace_Nodes(root->left,sum);
}

//Replacing Sum
void replace_Sum(node* root) {

	int sum=0;
	replace_Nodes(root, &sum);
}



int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a[10001];
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

	node* root = buildBST(a,0,n-1);
	replace_Sum(root);
	preorder(root);

	return 0;
}

//INPUT
// 7
// 20 30 40 50 60 70 80

//OUTPUT
// 260 330 350 300 150 210 80