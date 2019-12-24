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

//Build Tree having string parameter
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

//Zigzag traversal Lvl order using two stack approach
void Zigzag(node* root) {

	if(root==NULL) {
		return;
	}

	stack<node* > currentLevel;
	stack<node* > nextLevel;

	currentLevel.push(root);

	//check if stack is empty
	bool lft_to_rht = true;
	while(!currentLevel.empty()) {
		
		//pop out of stack
		node* temp = currentLevel.top();
		currentLevel.pop();

		//if not null
		if(temp) {
			cout<<temp->data<<" ";

			//Store data acc to current order
			if(lft_to_rht) {
				if(temp->left) {
					nextLevel.push(temp->left);
				}
				if(temp->right) {
					nextLevel.push(temp->right);
				}
			} else {
				if(temp->right) {
					nextLevel.push(temp->right);
				}
				if(temp->left) {
					nextLevel.push(temp->left);
				}
			}
		}

		if(currentLevel.empty()) {
			lft_to_rht = !lft_to_rht;
			swap(currentLevel,nextLevel);
		}
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node* root = buildTree("true");
	Zigzag(root);

	return 0;
}



//Input
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

//OUTPUT
// 10 30 20 40 50 60 73 