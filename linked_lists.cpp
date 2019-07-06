// Simple implementation to show the working of linked list in c++


#include <iostream>

using std::cout;

class node 
{
	public:
		int data;
		node* next;
};

/*
int main()
{
	node* head;
	head = new node;
	head -> data = 14;
 	head -> next = new node;
	head -> next -> data = 36;
	head -> next -> next = new node;
	head -> next -> next -> data = 64;
	head -> next -> next -> next = nullptr;	

	for (node* p = head; p != nullptr; p = p -> next)
	{
		cout << p -> data << "\n";
	}	
}
*/

void add_to_tail(node* head, int val)
{
// starting from head travel down to find tail
	
	node* ptr = head;
	while (ptr -> next != nullptr) ptr = ptr -> next;

	// ptr now points to tail node
	ptr -> next = new node;
	ptr -> next -> data = val;
	ptr -> next -> next = nullptr;
}

int main()
{
	node* head = new node;
	head -> data = 14;
	head -> next = nullptr;

	add_to_tail(head, 32);
	add_to_tail(head, 46);
	add_to_tail(head, 58);

	for (node* p = head; p != nullptr; p = p ->next)
	{
		cout << p -> data << "\n";
	}
}
