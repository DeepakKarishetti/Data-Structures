#include <iostream>
#include <array>

using namespace std;

void foo(int &x)
{
	x = 10;
	cout << x << "\n";
}

int main()
{
	char s[5] = {'H', 'e', 'l', 'l', 'o'};
	char* p = s;

	for (int i = 0; i < 5; i++)
	{
		cout << p[i] << "\n";
	//cout << *(p+i);
	}

	int sz;
	cout << "enter the size: " << "\n";
	cin >> sz;
	int *arr = new int[sz];
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0.0;
		cout << arr[i] << " ";
	}

	int se = sizeof(arr) / sizeof(arr[0]);	
	cout << "The size entered is: " << se << "\n" << "\n";

	return 0;
}
