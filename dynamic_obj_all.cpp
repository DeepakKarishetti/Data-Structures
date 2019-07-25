// implementation of dynamic array allocation in c++ on stacks and heap

#include <iostream>

using namespace std;
	
class student
{
	public:
		string name;

		student()
		{
			;
		}

		student(string n)
		{
			name = n;
			cout << name; 
		}
	
		void eat();
		void sleep();
		
};

void student::eat()
{
	cout << "EAT!" << "\n";
}

int main()
{
	// creating new objects on STACK
	// these are created on stack using the constructors and will vanish once out of scope
	student student1;
	student student2("Kirk ");
	student1.eat();

	// creating new objects on HEAP
	// creating objects dynamically and will live forever unless deleted after use
	student* st1 = new student;
	student* st2 = new student("Mona Lisa ");
	
	(*st1).eat();	
	st1 -> eat();
	// delete
	delete st1, st2;

	return 0;
}
