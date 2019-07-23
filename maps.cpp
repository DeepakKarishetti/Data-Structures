// Implementation of map in c++

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> lengths;
	lengths.emplace("apple", 5);
	lengths.emplace("orange", 6);

	cout << "Ask me a word: " << "\n";
	string s;
	cin >> s;
 
	if (lengths.count(s) > 0)
	{
		cout << s << " has " << lengths[s];
		cout << " letters " << endl;
	}
	else
	{
		cout << "I do not know the word\"" << s << "\".";
		cout << endl;
	}
}
