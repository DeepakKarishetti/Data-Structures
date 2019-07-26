// program to demonstrate the operator overloading in cpp

#include <iostream>

using namespace std;

class Test
{
	private:
		int count;
	
	public:
		// constructor
		//Test()
		//{
		//	count = 5;
		//}

		// different way of writing the same above constructor
		Test(): count(100){}

		void operator ++()
		{
			count = count + 1;
		}
		void display()
		{
			cout << "Count: " << count << "\n";
		}
};

int main()
{
	Test t;
	
	++t;
	t.display();
	
	return 0;
}
