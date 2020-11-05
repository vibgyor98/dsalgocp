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

void solve(Node* &head, int k) {
	int len = 0, i;
	Node* temp = head;
	while(temp != NULL) {
		temp = temp->next;
		len++;
	}
	if(len < k) return;
	temp = head;
	for(i = 1; i < len - k + 1; i++) temp = temp->next;
	cout << temp->data;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	Node* head = NULL;
	int data, k;
	while(data != -1) {
		cin >> data;
		if(data != -1) insertAtTail(head,data);
	}
	cin >> k;
	solve(head, k);

	return 0;
}

/*
Constraints
n < 10^5

Output Format
Output a single line containing the node value at the kth element from last.

Sample Input
1 2 3 4 5 6 -1
3
Sample Output
4
Explanation
The linked list is 1 2 3 4 5 6. -1 is not included in the list.
So the third element from the last is 4
*/