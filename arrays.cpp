#include <iostream>
#include <array>

using namespace std;

int main()
{
	char s[5] = {'H', 'e', 'l', 'l', 'o'};
	char* p = s;

	for (int i = 0; i < 5; i++)
	{
		cout << p[i] << "\n";
	//cout << *(p+i);
	}

	return 0;
}
