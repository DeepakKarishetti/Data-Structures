// simple and complete c++ program to demonstrate friend class

#include <iostream>

using namespace std;

class A
{
	private:
		int a;
	public:
		A(): a(108){}
		friend class B;
};

class B
{
	private:
		int b;
	public:
		void show_a(A& x)
		{
			cout << "A:a = " << x.a << "\n";
		}
};

int main()
{
	A a;
	B b;
	b.show_a(a);
	
	return 0;
}
