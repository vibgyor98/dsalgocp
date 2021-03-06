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

//modified BFS for Vertical way of Output
void bfs(node* root) {

	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* f = q.front();
		if(f==NULL) {
			cout<<endl;
			q.pop();
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout<<f->data<<" ";
			q.pop();

			if(f->left) {
				q.push(f->left);
			}
			if(f -> right) {
				q.push(f -> right);
			}
		}
	}
	return;
}

//inorder print
void inorder(node* root) {

	if(root==NULL) {
		return;
	}

	inorder(root->left);
	cout<<root->data<<" , ";
	inorder(root->right);
}

//Build BST
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

node* deleteInBST(node* root, int data) {
	if(root==NULL) {
		return NULL;
	} else if(data<root->data) {
		root->left = deleteInBST(root->left,data);
		return root;
	} else if(data==root->data) {
		//check for leaf node
		if(root->left==NULL && root->right==NULL) {
			delete root;
			return NULL;
		}
		//node with one child
		//present in left sub tree
		if(root->left!=NULL && root->right==NULL) {
			node* temp = root->left;
			delete root;
			return temp;
		}
		//present in right sub tree
		if(root->left==NULL && root->right!=NULL) {
			node* temp = root->right;
			delete root;
			return temp;
		}
		//node with two child
		node* replace = root->right;
		while(replace->left!=NULL) {
			replace = replace->left;
		}
		root->data = replace->data;
		root->right = deleteInBST(root->right, replace->data);
		return root;
	} else {
		root->right = deleteInBST(root->right, data);
		return root;
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node* root = build();
	int data;
	cin>>data;

	inorder(root);
	cout<<endl<<endl;
	bfs(root);
	root = deleteInBST(root,data);
	cout<<endl;
	inorder(root);
	cout<<endl<<endl;
	bfs(root);

	return 0;
}