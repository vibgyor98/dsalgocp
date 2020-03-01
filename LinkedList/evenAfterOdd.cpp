#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data=d;
		next=NULL;
	}
};

void insertAtTail(node*&head, int data) {
	if(head==NULL) {
		head = new node(data);
		return;
	}
	node*tail = head;
	while(tail->next!=NULL) tail=tail->next;
	tail->next = new node(data);
	return;
}

void buildList(node*&head, int n) {
	while(n--) {
		int data;
		cin>>data;
		insertAtTail(head,data);
	}
}

void printList(node*head) {
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

	int n;
	cin>>n;
	node*head=NULL;
	buildList(head,n);

	printList(head);
	return 0;
}

// input
// 5
// 1 2 2 2 1

// output
// 1 1 2 2 2