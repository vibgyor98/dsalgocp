#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int d) {
		data=d;
		next=NULL;
	}
};

void separateOddAndEven(Node** head_ref) {
	Node* end = *head_ref;
	Node* prev = NULL;
	Node* curr = *head_ref;

	while(end->next != NULL) end = end->next;

	Node* new_end = end;

	while(curr->data % 2 == 0 && curr != end) {
		new_end->next = curr;
		curr = curr->next;
		new_end->next = NULL;
		new_end = new_end->next;
	}

	if(curr->data % 2 != 0) {
		*head_ref = curr;
		while(curr != end) {
			if((curr->data) % 2 != 0) {
				prev = curr;
				curr = curr->next;
			} else {
				prev->next = curr->next;
				curr->next = NULL;
				new_end->next = curr;
				new_end = curr;
				curr = prev->next;
			}
		}
	} else {
		prev = curr;
	}
	if(new_end != end && (end->data) % 2 == 0) {
		prev->next = end->next;
		end->next = NULL;
		new_end->next = end;
	}
	return;
} 

void insertAtTail(Node* &head, int data) {
	if(head == NULL) {
		head = new Node(data);
		return;
	}
	Node* tail = head;
	while(tail->next != NULL) tail = tail->next;
	tail->next = new Node(data);
	return;
}

void printList(Node* head) {
	while(head != NULL) {
		cout << head->data <<" ";
		head = head->next;
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	Node* head = NULL;
	int n; cin >> n;
	int x;
	for(int i = 0; i < n; i++) {
		cin >> x;
		insertAtTail(head,x);
	}

	//passing value by ref
	separateOddAndEven(&head);
	printList(head);

	return 0;
}

// input
// 5
// 1 2 2 2 1

// output
// 1 1 2 2 2