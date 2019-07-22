// Find the factorial of a number using recursion
// Check for palindrome using a recursive helper function

#include <iostream>
#include <string>

using std::cout;
using std::string;

unsigned factorial(unsigned n)
{
	if (n == 0) return 1;
	return n * factorial(n-1);
}

bool is_palindrome(const string &s, int start, int end)
{
	if (end <= start) return true;
	return (s[start] == s[end] && is_palindrome(s, start+1, end-1));
}

bool is_palindrome(const string &s)
{
	return is_palindrome(s, 0, s.length() - 1);
}

int main()
{
	// factorial
	unsigned n;
	cout << "Enter a number to find the factorial: " << "\n";
	std::cin >> n;

	int x = factorial(n);
	cout << x << "\n\n";

	// Palindrome check
	string s;
	cout << "Enter a string to check for palindrome: " << "\n";
	std::cin >> s;

	bool y = is_palindrome(s);
	if (y == true)
	{
		cout << "It is a palindrome" << "\n";
	}
	else
	{
		cout << "Not a palindrome" << "\n";
	}
}
