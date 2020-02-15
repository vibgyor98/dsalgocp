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

//Calculate the length of the linked list
int length(node*head) {
	int len=0;
	while(head!=NULL) {
		head=head->next;
		len+=1;
	}
	return len;
}

//Insert at Head
void insertAtHead(node*&head, int data) {
	node*n = new node(data);
	n->next = head;
	head = n;
}

//Insert at tail
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

//Insert at Middle
void insertAtMiddle(node*&head, int data, int p) {
	//chk if the current head is null
	if(head==NULL||p==0) {
		insertAtHead(head,data);
	}
	//chk if the node lies in tail
	else if(p>length(head)) {
		insertAtTail(head,data);
	}
	//Actually inserting in the middle 
	else {
		//take p-1 jumps
		int jump=1;
		node*temp=head;
		while(jump<=p-1) {
			temp=temp->next;
			jump+=1;
		}
		node*n = new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}

//Delete operations

//Delete at head
void deleteAtHead(node*&head) {
	if(head==NULL) {
		return;
	}
	node*temp=head;
	head=head->next;
	delete temp;
	return;
}

//Delete at tail
void deleteAtTail(node*head) {
	node*prev=NULL;
	node*temp=head;
	while(temp->next!=NULL) {
		prev=temp;
		temp=temp->next;
	}
	delete temp;
	prev->next=NULL;
	return;
}

//Delete at middle
void deleteAtMiddle(node*&head, int p) {
	if(head==NULL||p==0) return;
	else if(p>length(head)) return;
	else {
		int jump=1;
		node*temp=head;
		node*prev=NULL;
		while(jump<=p-1) {
			prev=temp;
			temp=temp->next;
			jump+=1;
		}
		prev->next=temp->next;
		delete temp;
	}
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
	insertAtTail(head,6);
	insertAtMiddle(head,2,3);

	print(head);

	deleteAtHead(head);
	deleteAtTail(head);

	print(head);

	deleteAtMiddle(head,2);

	print(head);

	return 0;
}