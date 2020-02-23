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

//merge sort
node*merge(node*a, node*b) {
	if(a==NULL) return b;
	else if(b==NULL) return a;
	node*c;
	//compare a and b for smaller ele
	if(a->data<b->data) {
		c=a;
		c->next = merge(a->next,b);
	} else {
		c=b;
		c->next = merge(a,b->next);
	}
	return c;
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

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		node*head1=NULL;
		buildList(head1,n);
		int m;
		cin>>m;
		node*head2=NULL;
		buildList(head2,m);
		node*head = merge(head1,head2);
		printList(head);
	}

	return 0;
}

// input
// 1
// 4
// 1 3 5 7
// 3
// 2 4 6

// output
// 1 2 3 4 5 6 7 