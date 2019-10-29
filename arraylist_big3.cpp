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
		
		// adding in the cpp big3 rules elements
		array_list(const array& lst); // copy constructor
		~array_list(); // destructor
		array_list& operator=(const array_list& lst); // copy assignment operator
};

array_list::array_list()
{
	_capacity = 0;
	_size = 0;
	int* _arr = new int[_capacity];
}

void array_list::add
{
	if (_size == _capacity)
	{
		_capacity = _capacity * 2;

		int* newarr = new int[_capacity];
		for (int i = 0; i < _size; i++)
		{
			newarr[i] = arr[i];
		}
		delete[] _arr;
		_arr = newarr;
	}
	_arr[size] = val;
	_size++;
}

// array_list copy constructor
array_list::array_list(const array_list& lst)
{
	
