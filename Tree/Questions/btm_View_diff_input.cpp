#include <bits/stdc++.h>
using namespace std;

class node {
public:

	int data;
	int hd;
	node *left;
	node *right;

	node(int d) {
		data = d;
		hd = INT_MAX;
		left = NULL;
		right = NULL;
	}
};

//Build tree levwl wise
node* buildTree_Lvl_Wise() {
	
	int d;
	cin>>d;
	node* root = new node(d);
	queue<node* > q;
	q.push(root);

	while(!q.empty()) {
		node* temp = q.front();
		q.pop();
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1) {
			temp->left = new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1) {
			temp->right = new node(c2);
			q.push(temp->right);
		}
	}

	return root;
}

//Bottom view of binary tree
void btm_View(node* root) {
	if(root==NULL) {
		return;
	}

	int hd = 0;
	map<int,int> m;
	queue<node*> q;

	root->hd = hd;
	q.push(root);

	while(!q.empty()) {
		node* temp = q.front();
		q.pop();

		hd = temp->hd;
		m[hd] = temp->data;

		if(temp->left != NULL) {
			temp->left->hd = hd-1;
			q.push(temp->left);
		}

		if(temp->right != NULL) {
			temp->right->hd = hd+1;
			q.push(temp->right);
		}
	}
	for(auto i = m.begin(); i != m.end(); i++) {
		cout<<i->second<<" ";
	}
}

// int static a[100000001];
// int n = sizeof(a)/sizeof(int);

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node* root = buildTree_Lvl_Wise();
	btm_View(root);


	return 0;
}

//INPUT
// 1 2 3 4 5 6 -1 -1 -1 -1 -1 -1 -1

//OUTPUT
// 4 2 6 3