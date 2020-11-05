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

//building List
void buildList(node*&head) {
	int data;
	cin>>data;
	while(data!=-1) {
		insertAtTail(head,data);
		cin>>data;
	}
}

//print
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
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	node*head = NULL;
	buildList(head);
	printList(head);

	return 0;
}