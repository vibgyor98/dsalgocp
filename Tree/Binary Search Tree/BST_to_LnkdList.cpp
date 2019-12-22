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

class LinkedList {
public:
	node* head;
	node* tail;
};

LinkedList flatten(node* root) {
	
	LinkedList l;

	if(root==NULL) {
		l.head = l.tail = NULL;
		return l;
	}

	//Leaf Node
	if(root->left == NULL && root->right == NULL) {
		l.head = l.tail = root;
		return l;
	}

	//Left is not NULL
	if(root->left != NULL && root->right == NULL) {
		LinkedList leftLL = flatten(root->left);
		leftLL.tail->right = root;
		l.head = leftLL.head;
		l.tail = root;
		return l;
	}

	//Right is not NULL
	if(root->left == NULL && root->right != NULL) {
		LinkedList rightLL = flatten(root->right);
		root->right = rightLL.head;
		l.head = root;
		l.tail = rightLL.tail;
		return l;
	}

	//Both side are not NULL
	LinkedList leftLL = flatten(root->left);
	LinkedList rightLL = flatten(root->right);

	leftLL.tail->right = root;
	root->right = rightLL.head;

	l.head = leftLL.head;
	l.tail = rightLL.tail;

	return l;

}

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

//Inorder print
void inorder(node* root) {

	if(root==NULL) {
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
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

	node* root = build();
	inorder(root);
	cout<<endl<<endl;
	bfs(root);
	cout<<endl;

	LinkedList l = flatten(root);
	node* temp = l.head;
	while(temp!=NULL) {
		cout<<temp->data<<" --> ";
		temp = temp->right;
	}

	return 0;
}