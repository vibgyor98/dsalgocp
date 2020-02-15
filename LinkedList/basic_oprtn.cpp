#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

//Insert at Head
void insertAtHead(node*&head, int data) {
	node*n = new node(data);
	n->next = head;
	head = n;
}

//Insert at Middle
void insertAtMiddle(node*&head, int data) {
	//chk if the current head is null
	if(head->data==NULL) {
		insertAtHead(head,data);
	}
	//chk if the node lies in tail
	
}

//print ll
void print(node*head) {
	// node*temp = head;
	while(head!=NULL) {
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	node*head = NULL;
	insertAtHead(head,5);
	insertAtHead(head,4);
	insertAtHead(head,3);

	print(head);
	print(head);

	return 0;
}