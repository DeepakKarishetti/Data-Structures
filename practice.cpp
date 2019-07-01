#include <iostream>
#include <array>

using namespace std;

void print_it()
{
	cout << "Maggie!" << "\n\n" << "Enter a word to count the word length:" << "\n";
}

int str_length(string word)
{
	cout << word.length() << "\n";
}	

// recursive function
void print_n_times(string s, int n)
{
	if (n == 0) return; // base case: VERY IMPORTANT
	cout << s << "\n";
	print_n_times(s, n-1); // recursively calling the function
}

// passing parameter by value
void set_to_zero(int x)
{
	x = 0;
}

// passing parameter by reference
void set_to_zero_ref(int &x)
{
	x = 0;
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
		cout << "Hello!" << "\n\n";
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
	cout << "\n";

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
	cout << "\n";

	// calling the print_n_times function
	print_n_times("What's up?", 5);

	// pass by value
	int y = 42;
	set_to_zero(y);
	cout << "\n" << y << "\n";
	
	// pass by reference
	int q = 42;
	set_to_zero_ref(q);
	cout << "\n" << q << "\n";

	return 0;
}
