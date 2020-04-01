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

//constructing tree
node* buildTree() {
	int d, num;
	cin >> d;
	node* root = new node(d);
	cin >> num;
	if (num == 2) {
		root->left = buildTree();
		root->right = buildTree();
	} else if (num == 1) {
		root->left = buildTree();
	}
	return root;
}

//Sum at kth level
int sum = 0;
void sum_at_Kth_level(node* root, int k) {
	if (root == NULL) {
		return;
	}
	if (k == 0) {
		sum += root->data;
	}
	if (k < 1) {
		return;
	}

	sum_at_Kth_level(root->left, k - 1);
	sum_at_Kth_level(root->right, k - 1);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* root = buildTree();
	int k;
	cin >> k;
	sum_at_Kth_level(root, k);
	cout << sum;

	return 0;
}