// implementation of the big3 rules in cpp

#include <iostream>

using namespace std;

class foo
{
	public: 
		int n;
};

// number class
class number
{
	private:
		int* ptr;
	public:
		number(int n) { ptr = new int(n); }
		// fixing the defaults by defining our own copy constructor, destructor and assignment operator
		// copy constructor
		number(const number& num);
	
		// destructor
		~number();

		// assignment operator
		number& operator=(const number& num);
};

// S_1 : copy non-pointer member variables
// S_2 : allocate our own memory
// S_3 : copy value (not the pointer)
number::number(const number& num)
{
	ptr = new int;
	*ptr = *(num.ptr);
}

// S_1 : check for self assignment
// S_2 : copy non pointer member variables
// S_3 : allocate/deallocate if necessary
// S_4 : copy value
// S_5 : return *this
number& number::operator=(const number& num)
{
	if (this == &num) return *this; // self assignment

	// no need to allocate/deallocate, we are the same size
	*ptr = *(num.ptr);
	return *this;
}

// just need to clean up the memory
number::~number()
{
	delete ptr;
}

int main()
{
	foo x;
	x.n = 42;
	cout << "x.n : " << x.n << "\n";	

	foo y(x);
	cout << "y.n: " << y.n << "\n";

	x.n = 14;
	cout << "x.n: " << x.n << "\n";

	y = x;
	cout << "y.n: " << y.n << "\n";

	// number class
	number u(42);
	number v = u;

	return 0;
}

