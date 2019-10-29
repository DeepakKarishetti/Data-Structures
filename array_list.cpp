// array list implementation in c++
// TODO: Array list operation refactoring: capturing the common behaviour in different functions and putting it under a function which can be reused over and again instead of writing the same code multiple times.

#include <iostream>

using namespace std;

class array_list
{
	public:
		array_list();
		int size();
		int get(int index);
		void set(int index, int val);
		void add(int val);
		void insert(int index, int val);
		void erase(int index);
		int& operator[](int index);
		void print();

	private:
		int* _arr;
		int _size;
		int _capacity;
};

// constructor to setup initial storage, size, capacity
array_list::array_list()
{
	_capacity = 1;
	_size = 0;
	_arr = new int[_capacity];
}

// array list operation: add
void array_list::add(int val)
{
	// check for enough space
	if (_size == _capacity)
	{
		_capacity = _capacity * 2;
	
	
		// create new array
		int* newarr = new int[_capacity];
	
		// copy contents from old to new array list
		for (int j = 0; j < _size; j++)
		{
			newarr[j] = _arr[j];
		}

		// delete old array
		delete[] _arr;

		// update the pointer to point to the new array
		_arr = newarr;
	}

	_arr[_size] = val;
	_size++;
}

// array list operation: insert
void array_list::insert(int index, int val)
{
	if (_size == _capacity)
	{
		_capacity = _capacity * 2;
	
		int* newarr = new int[_capacity];
		
		for (int j = 0; j < _size; j++)
		{
			newarr[j] = _arr[j];
		}
		
		delete[] _arr;
		
		_arr = newarr;
	}
	
	// insert operation
	for (int j = _size; j > index; j--)
	{
		_arr[j] = _arr[j - 1];
		_arr[index] = val;
	}
	_size++;
	
}

// array list operation: delete 
void array_list::erase(int index)
{
	for (int j = index; j < _size - 1; j++)
	{
		_arr[j] = _arr[j + 1];
	}
	_size--;	
}

// print array
void array_list::print()
{
	for (int j = 0; j < _size; j++)
	{
		cout << _arr[j] << " ";
	}
}

int main()
{
	array_list al;
	
	al.add(5);
	al.add(199);
	al.insert(2, 10);
	al.erase(1);
	al.print();
	cout << "\n";
	
	return 0;
}
