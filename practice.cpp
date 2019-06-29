#include <iostream>
#include <array>

using namespace std;

void print_it()
{
	cout << "Maggie!" << "\n";
}

int str_length(string word)
{
	cout << word.length() << "\n";
}	

int main()
{
	// operators
	float a = 5.0;
	int b = 2.0;
	int c = a/b;
	float d = a/b;

	cout << c << "\n";
	cout << d << "\n";

	// loops
	for (int i = 1; i <= 3; i++)
	{
		cout << "Hello world!" << "\n";
	}

	// decrement loop
	int j = 3;
	while (j > 0)
	{
		cout << "Hello!" << "\n";
		j--;
	}

	// input from user
	char answer;
	cout << "Say Hello or Bye?" << "\n";
	cin >> answer;

	if (answer == 'H')
	{
		cout << "Hello!" << "\n";
	}
	else if (answer == 'B')
	{
		cout << "Bye" << "\n";
	}
	else
	{
		cout << "Invalid input" << "\n";
	}
	
	// arrays
	array<int, 3> numbers;

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 4;
	
	for (int k = 0; k < 3; k++)
	{
		cout << numbers[k] << "\n";
	}

	cout << "Size in bytes : " << sizeof(numbers) << "\n"; 
	cout << "Array size: " << numbers.size() << "\n";
	
	string enter;
	print_it();	
	cin >> enter;	
	str_length(enter);
	
	return 0;
}
