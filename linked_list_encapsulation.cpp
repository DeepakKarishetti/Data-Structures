/* Encapsulating linked lists - making a class

 - Advantages:
	 - keep track of head/tail so user dosen't have to
	 - prevent user from messing up list structure accidentally
	 - keep useful metadata
	 - Encapsulate data with operations on data
*/

#include <iostream>

using std::cout;

class linked_list
{
	public:
		void add_to_front(int val);
		void add_to_tail(int val);
		void remove_from_front();
		void remove_from_back();
		void print();


	private:
		class node
		{
			public:
				int data;
				node* next;
		};
	
		node* head = nullptr;
		node* tail = nullptr;
		int size = 0;
};

// adding elementa to the linked list at its front (head)
void linked_list::add_to_front(int val)
{
	node* p = new node;
	p -> data = val;
	p -> next = nullptr;

	if (head == nullptr)
	{
		head = tail = p;
	}
	else
	{
		p -> next = head;
		head = p;
	}
	size++;
}


// adding elements to the linked list at its end (tail)
void linked_list::add_to_tail(int val)
{
	node* p = new node;
	p -> data = val;
	p -> next = nullptr;

	// if list is empty, new node becomes head and tail
	if (head == nullptr)
	{
		head = tail = p;
	}
	else
	{
		tail -> next = p;
		tail = p;
	}
	size++;
}

// remove element from the front of a linked list
void linked_list::remove_from_front()
{
	// making sure we don't operate on empty list
	if (head == nullptr) return;

	// save a pointer to head
	node* p = head;
	
	// move the head pointer to next node
	head = head -> next;

	// desrtoy old head
	delete p;
	
	size--;
}

// remove element from the back of a linked list
void linked_list::remove_from_back()
{
	if (head == nullptr) return;

	if (head == tail)
	{
		delete head;
		head = tail = nullptr;
	}
	else
	{
		node* p = head;
		while (p -> next != tail) p = p -> next;
		delete tail;
		tail = p;
	}
	size--;
}


// print out the linked list
void linked_list::print()
{
	for (node* p = head; p != nullptr; p = p -> next)
	{
		cout << p -> data << "\n";
	}
}

int main()
{
	linked_list ll;
	
	ll.add_to_tail(100);
	ll.add_to_tail(200);
	ll.add_to_tail(300);
	
	ll.add_to_front(0);
	
	ll.remove_from_front();
	ll.remove_from_back();
	
	ll.print();
	
	return 0;
}	
