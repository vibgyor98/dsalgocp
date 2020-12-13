#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int d) {
		data = d;
		next = NULL;
	}
};

bool isPalindrome(Node* &head) {
	Node* slow = head;
	stack <int> s;
	while(slow != NULL) {
		s.push(slow->data);
		slow = slow->next;
	}
	while(head != NULL) {
		int i = s.top();
		s.pop();
		if(head->data != i) return false;
		head = head->next;
	}
	return true;
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

void buildList(Node* &head, int N) {
	for(int i = 0; i < N; i++) {
		int data;
		cin >> data;
		insertAtTail(head,data);
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	Node* head = NULL;
	buildList(head,N);

	if(isPalindrome(head)) cout << "true";
	else cout << "false";


	return 0;
}

/*
Constraints
None

Output Format
Boolean answer( true or false)

Sample Input
5
1 2 3 6 8
Sample Output
false
*/