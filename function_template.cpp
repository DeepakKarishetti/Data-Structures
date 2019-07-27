#include <iostream>
#include <utility>

using namespace std;

/*
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
*/

// template for swap function
template <typename T>
void swapi(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

// template for finding max element
template <typename T>
T mymax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()			
{
	int a = 5;
	int b = 9;
	swapi<int>(a,b);
		
	cout << "a: " << a << "\n" << "b: " << b << "\n";

	cout << mymax<int>(3,7) << "\n";
	cout << mymax<float>(1.64, 2.64) << "\n";
	cout << mymax<char>('a','d') << "\n";
	return 0;
	
}	
