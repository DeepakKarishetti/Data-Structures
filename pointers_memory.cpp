/* 
 - Check numbers - positional notation (decimal, hexa-decimal, octal, binary)

 - Computers work with bits-0's and 1's

 - c++ data types are organised into bytes
	- char -> 1 byte
	- int -> 4 bytes
	- double -> 8 bytes

 - Get size of variable/object type using method sizeof()
	int size_of_var = sizeof(double);

 - Computer memory is organised as an indexed array of bytes having its address stored adjacent to it in hexadecimal, starting from bottom and counting up.
*/

#include <iostream>

using namespace std;

int main()
{
	int x = 72;
	cout << &x << "\n"; // & is used to obtain the address of the variable 

	// Pointer is a variable that stores an address and its type is followed by a *:
	int* p = &x;
	cout << p << "\n";
		
	// dereference operator * - get the vale stored at the given address:
	cout << *p << "\n";

	int** pp = &p;
	cout << "\n" << **pp << "\n";
	int*** q = &pp;
	cout << "\n" << ***q << "\n";

	// pointer independence
	int i = 108;
	int* j = &i;
	cout << j << "\n";

	i = 10;

	cout << *j << "\n" << i << "\n";
	cout << j << "\n";	

	// assigning through *
	*j = 17;

	cout << *j << "\n" << j << "\n";

	// nullptr pointer
	int* k = nullptr;
	cout << *k << "\n"; // crashes as null pointer is never a valid memory address

	return 0;
}


