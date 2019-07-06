/* Program to explain encapsulation in c++

	- The process of implementing encapsulation can be sub-divided into two steps:
		 - The data members must be labelled as private using the private access specifier.
		
		 - The member function which manipulates the data members should be labelled as public using the public access specifier.


*/

#include <iostream>

using std::cout;

class Encapsulation
{
	private:
		int x;

	public:
		
		// function to set value of variable x
		void set(int a)
		{
			x = a;
		}

		// function to return the value of variable x
		int get()
		{
			return x;
		}
};

int main()
{
	Encapsulation obj;

	obj.set(5);
	
	cout << obj.get() << "\n";
	
	return 0;
}
