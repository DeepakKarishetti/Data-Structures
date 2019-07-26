// this shows the implementation of array list following the big3 c++ rules

#include <iostream>

using namespace std;

class array_list
{
	private:
		int* _arr;
		int _size;
		int _capacity;
	
	public:
		array_list();
		int size();
		void add(int val);
		int get(int index);
		void set(int index, int val);
		void erase(int index);
		void deep_copy(const array_list& lst);
		// adding in the cpp big3 rules elements
		array_list(const array_list& lst); // copy constructor
		~array_list(); // destructor
		array_list& operator=(const array_list& lst); // copy assignment operator
};

array_list::array_list()
{
	_capacity = 0;
	_size = 0;
	int* _arr = new int[_capacity];
}

void array_list::add(int val)
{
	if (_size == _capacity)
	{
		_capacity = _capacity * 2;

		int* newarr = new int[_capacity];
		for (int i = 0; i < _size; i++)
		{
			newarr[i] = _arr[i];
		}
		delete[] _arr;
		_arr = newarr;
	}
	_arr[_size] = val;
	_size++;
}

// array_list copy constructor
array_list::array_list(const array_list& lst)
{
	/*
	// copy non pointer variables
	_capacity = lst._capacity;
	_size = lst.size;
	// allocate
	_arr = new int[_capacity];
 	// copy values
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = lst._arr[i];
	}
	*/
	deep_copy(lst);
}

// assignment operator
array_list& array_list::operator=(const array_list& lst)
{
	// check self assignment
	if (this == &lst) return *this;
	
	delete[] _arr; // delete old
	/*
	// copy non-pointer member variables
	_capacity = lst._capacity;
	_size = lst._size;
	// allocate
	_arr = new int[_capacity];
	// copy
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = lst._arr[i];
	}
	*/
	deep_copy(lst);
	// return *this
	return *this;
}

// destructor
array_list::~array_list()
{
	delete[] _arr;
}

// array list refactoring: using a common function instead of writing the same code again and again
void array_list::deep_copy(const array_list& lst)
{
	_capacity = lst._capacity;
	_size = lst._size;
	_arr = new int[_capacity];
	for (int i = 0; i < _size; i++)
	{
		_arr[i] = lst._arr[i];
	}
}

int main()
{
	array_list lst;
	lst.add(5);
	
	return 0;
}
