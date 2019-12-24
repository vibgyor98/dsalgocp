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

//BuildTree having string parameter
node* buildTree(string s) {

	if(s=="true") {
		int d;
		cin>>d;
		node* root = new node(d);

		string l;
		cin>>l;
		if(l=="true") {
			root->left = buildTree(l);
		}

		cin>>l;
		if(l=="true") {
			root->right = buildTree(l);
		}
		return root;
	}
	return NULL;
}

//for pairing balance and height
class HBPair{
public:
	int height;
	bool balance;
};

//Check the balancity of tree
HBPair isHeightBalance(node* root) {

	HBPair p;
	if(root==NULL) {
		p.height = 0;
		p.balance = true;
		return p;
	}

	HBPair left = isHeightBalance(root->left);
	HBPair right = isHeightBalance(root->right);

	p.height = max(left.height,right.height)+1;

	if(abs (left.height - right.height <= 1) &&
		left.balance &&
		right.balance) {
		p.balance = true;
	} else {
		p.balance = false;
	}

	return p;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node* root = buildTree("true");

	if(isHeightBalance(root).balance) {
		cout<<"true";
	} else {
		cout<<"false";
	}

	return 0;
}
























//INPUT
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

// OUTPUT
// true