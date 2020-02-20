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

//reverse the list
void reverseList(node*&head) {
	node*curr = head;
	node*prev = NULL;
	node*n;
	while(curr!=NULL) {
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
	}
	head = prev;
}

//inserting nodes at the tail
void insertAtTail(node*&head, int data) {
	if(head==NULL) {
		head = new node(data);
		return;
	}
	node*tail = head;
	while(tail->next!=NULL) {
		tail=tail->next;
	}
	tail->next = new node(data);
	return;
}

//building list
void buildList(node*&head) {
	int data;
	cin>>data;
	while(data!=-1) {
		insertAtTail(head,data);
		cin>>data;
	}
}

//print the list
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

	node*head = NULL;
	buildList(head);
	printList(head);
	reverseList(head);
	printList(head);



	return 0;
}