// Usage of simple stacks in c++

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack <int> letters;
	letters.push(0);
	letters.push(1);
	letters.push(2);
	letters.push(3);
	letters.push(4);

	letters.pop();

	while (!letters.empty())
	{
		cout << letters.top() << "\n";
		letters.pop();
	}
}


