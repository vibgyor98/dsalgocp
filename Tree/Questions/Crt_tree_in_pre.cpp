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

node* createTree_In_Pre(int *in, int *pre, int s, int e) {
	static int i=0;
	if(s>e) {
		return NULL;
	}

	node* root = new node(pre[i]);
	int idx = -1;
	for(int j=s;j<=e;j++) {
		if(in[j]==pre[i]) {
			idx = j;
			break;
		}
	}
	i++;
	root->left=createTree_In_Pre(in,pre,s,idx-1);
	root->right=createTree_In_Pre(in,pre,idx+1,e);

	return root;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int in[] = {3,2,8,4,1,6,7,5};
	int pre[] = {1,2,3,4,8,5,6,7};
	int n = sizeof(in)/sizeof(int);
	node* root = createTree_In_Pre(in,pre,0,n-1);
	bfs(root);
	

	return 0;
}