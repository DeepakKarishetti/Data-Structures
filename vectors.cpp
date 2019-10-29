#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g;

	g.push_back(5);
	cout << g.size() << "\n";
	for (int i=0; i<g.size();i++)
	{
		cout << g[i] << "\n";
	}

	int x,y;

	return 0;
}
