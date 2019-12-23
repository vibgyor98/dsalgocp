#include <bits/stdc++.h>
using namespace std;

class node {
public:
	string str;
	node* left;
	node* right;

	node(string s) {
		str = d;
		left = NULL;
		right = NULL:
	}
};

node* buildTree() {
	string str;
	cin>>str;

	if(str!='flase') {
		node* root = new node(str);
	} else {
		root->left = buildTree();
		root->right = buildTree();
	}
	return root;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node* root1 = buildTree();
	node* root2 = buildTree();

	if(root1==root2) {
		cout<<"true";
	} else {
		cout<<"false";
	}

	return 0;
}




// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false