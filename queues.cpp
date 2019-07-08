// simple c++ implementation of queues

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue <string> q;
	
	q.push("A");
	q.push("B");
	q.push("C");
	q.push("D");
	
	cout << q.size() << "\n";
	
	q.pop();
	
	cout << q.size() << "\n";
	cout << q.front() << "\n";
}
