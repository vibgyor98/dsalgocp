#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* buildTree(string s) {
	if(s=="true") {
		int d;
		cin>>d;
		node* root = new node(d);

		string a;
		cin>>a;
		if(a=="true") {
			root->left = buildTree(a);
		}

		cin>>a;
		if(a=="true") {
			root->right = buildTree(a);
		}
		return root;
	}
	return NULL;
}

bool check(node* root1, node* root2) {
	if(root1==NULL && root2==NULL) {
		return true;
	}

	if(root1!=NULL && root2!=NULL) {
		bool left = check(root1->left,root2->left);
		bool right = check(root1->right,root2->right);
		return (left && right);
	}
	return false;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node* root1 = buildTree("true");
	node* root2 = buildTree("true");

	if(check(root1,root2)) {
		cout<<"true";
	} else {
		cout<<"false";
	}

	return 0;
}




//input
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false