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

node* rev(node*head, int k) {
	node*curr=head;
	node*prev=NULL;
	node*n;
	int count=0;
	while(curr!=NULL && count<k) {
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
		count++;
	}
	if(next!=NULL) {
		head->next=rev(next,k);
	}
	return prev;
}

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

void buildList(node*&head, int N) {
	for(int i=0; i<N; i++) {
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

	int N,k;
	cin>>N>>k;

	node*head = NULL;
	buildList(head,N);
	rev(head,k);
	printList(head);



	return 0;
}