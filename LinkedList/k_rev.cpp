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

	int N;
	cin>>N;

	node*head = NULL;
	buildList(head,N);
	printList(head);



	return 0;
}