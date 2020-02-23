#include <iostream>
using namespace std;

class node {
public:
	int data;
	node*next;

	node(int d) {
		data=d;
		next=NULL;
	}
};

//pointing to the exact node form where partition should occur
node*append(node*&head, int n, int k) {
	node*curr=head;
	node*prev=NULL;
	int pos=n-k+1;
	for(int i=1;i<=pos;i++) {
		curr=curr->next;
		prev=prev->next;
	}
	prev=NULL;

	node*temp=curr;
	temp=head;
	return temp;
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

void buildList(node*&head, int n) {
	int data;
	while(n!=0) {
		cin>>data;
		insertAtTail(head,data);
		n--;
	}
}

void printList(node*head) {
	while(head!=NULL) {
		cout<<head->data<<" ";
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
	node*head = NULL;
	buildList(head,n);
	int k;
	cin>>k;
	head=append(head,n,k);
	printList(head);


	return 0;
}

// input
// 7
// 1 2 2 1 8 5 6
// 3

// output
// 8 5 6 1 2 2 1