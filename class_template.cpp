#include <iostream>

using namespace std;

template <class T, class U>
class A
{
	private:
		T x;
		U y;
	public: 
		A()
		{
			cout << "Constructor called!" << "\n";
		}
};

// array class
template <class T>
class Array
{
	private:
		T* ptr;
		int size;
	public:
		Array(T arr[], int s);
		void print();
};

template <class T>
Array<T>::Array(T arr[], int s)
{
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
	{
		ptr[i] = arr[i];
	}
}

template <class T>
void Array<T>::print()
{
	for (int i = 0; i < size; i++)
	{
		cout << " " << *(ptr+i);
	}
	cout << "\n";
}

// array list class template
template <class A>
class array_list
{
	private:
		A* _arr;
		int _size;
		int _capacity;
		void _resize();
	public:
		array_list();
		array_list(const array_list<A>& lst);
		~array_list();
		array_list& operator=(const array_list<A>& lst);

		int size();
		A get(int index);
		void set(int index, A val);

template <class A>
array_list<A>::array_list()
{
	_size = 0;
	_capacity = 1;
	_arr = new A[_capacity];
}

template <class A>
void array_list<A>::array_list(const array_list<A>& lst)
{
	deep_copy(lst);
}

template <class A>
void array_list<A>::_resize()
{
	if (_size == _capacity)
	{
		_capacity = _capacity * 2;
		A* newarr = new A[_capacity];
		for (int i = 0; i < _size; i++)
		newarr[i] = _arr[i];
		delete[] _arr;	
		_arr = newarr;
	}
}

template <class A>
void array_list<A>::add(A val)
{
	_resize();
	_arr[_size] = val;
	_size++;
}

void array_list<A>::deep_copy(const array_list<A>& lst)
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
	A<char, char> a;
	A<int, double> b;

	// array class template
	int arr[5] = {1, 2, 3, 4, 5};
	Array<int> x(arr, 5);
	x.print();
	
	// array list template
	array_list<A> lst;
	lst.add(5);

	return 0;
}


