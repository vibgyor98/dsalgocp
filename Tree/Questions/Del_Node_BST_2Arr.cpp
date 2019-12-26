#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int d) {
		data =d;
		left = NULL;
		right = NULL;
	}
};

//forming BST by inserting ele
node* insert_in_BST(node* root, int data) {

	if(root==NULL) {
		return new node(data);
	}
	if(data > root->data) {
		root->right = insert_in_BST(root->right,data);
	} else if(data < root->data) {
		root->left = insert_in_BST(root->left,data);
	}

	return root;
}

//BUILD BST
node* arr_to_BST(int *a, node* root, int n) {

	for(int i=0; i<n; i++) {
		root = insert_in_BST(root,a[i]);
	}
	return root;
}

//Delete in BST
// node* deleteInBST(node* root, int data) {
// 	if(root==NULL) {
// 		return NULL;
// 	} else if(data<root->data) {
// 		root->left = deleteInBST(root->left,data);
// 		return root;
// 	} else if(data==root->data) {
// 		//check for leaf node
// 		if(root->left==NULL && root->right==NULL) {
// 			delete root;
// 			return NULL;
// 		}
// 		//node with one child
// 		//present in left sub tree
// 		if(root->left!=NULL && root->right==NULL) {
// 			node* temp = root->left;
// 			delete root;
// 			return temp;
// 		}
// 		//present in right sub tree
// 		if(root->left==NULL && root->right!=NULL) {
// 			node* temp = root->right;
// 			delete root;
// 			return temp;
// 		}
// 		//node with two child
// 		node* replace = root->right;
// 		while(replace->left!=NULL) {
// 			replace = replace->left;
// 		}
// 		root->data = replace->data;
// 		root->right = deleteInBST(root->right, replace->data);
// 		return root;
// 	} else {
// 		root->right = deleteInBST(root->right, data);
// 		return root;
// 	}
// }


//Delete in bst new technique
node* deleteBST (node* root, int key) {
    if (root==NULL) return NULL;
    else if (key < root->data) {
        root->left =  deleteBST (root->left, key);
        return root; }
    else if (key > root->data) {
        root->right = deleteBST (root->right, key);
        return root; }
    else {
        if (root->left==NULL && root->right==NULL) {
            delete root;
            return NULL;
        } else if (root->left==NULL && root->right!=NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right==NULL && root->left!=NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        } else {
            node* replace = root->left;
            while(replace->right!=NULL) {
                replace = replace->right;
            }
            root->data = replace ->data;
            root->left = deleteBST (root->left, replace->data);
            return root;
        }
    }
}

//Preorder
void preorder(node* root) {
	if(root==NULL) {
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		node* root = new node(a[0]);
		root = arr_to_BST(a,root,n);

		int m;
		cin>>m;
		for(int i=0; i<m; i++) {
			int x;
			cin>>x;
			root = deleteBST(root,x);
		}
		preorder(root);
	}


	return 0;	
}





//INPUT
// 1
// 7
// 5 3 2 4 7 6 8
// 3
// 2 3 5


//OUTPUT
// 4 7 6 8