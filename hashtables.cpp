// Simple hashtable implementation in c++

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;
// table size
const int size = 200;

// Create a structure to declare key k and value v
class HashtableEntry
{
	public:
		int k;
		int v;
		HashtableEntry(int k, int v)
		{
			this -> k = k;
			this -> v = v;
		}
};

// Create a class hashmaptable
class HashMaptable
{
	private:
		HashtableEntry **t;
	public:
		// create a constructor to create a table
		HashMaptable()
		{
			t = new HashtableEntry * [size];
			for (int i = 0; i < size; i++)
			{
				t[i] = NULL;
			}
		}
		// create a function which returns key mod size
		int Hashfunction(int k)
		{
			return k % size;
		}
		// Insert function to insert an element at a key
		void insert(int k, int v)
		{
			int h = Hashfunction(k);	
			while (t[h] != NULL && t[h] -> k !=k)
			{
				h = Hashfunction(h + 1);
			}
			if (t[h] != NULL)
			{
				delete t[h];
			}
			t[h] = new HashtableEntry(k, v);
		}
		// Function to search for an element at a key
		int Searchkey(int k)
		{
			int h = Hashfunction(k);
			while (t[h] != NULL && t[h] -> k != k)
			{
				h = Hashfunction(h + 1);	
			}
			if (t[h] == NULL)
			{
				return -1;
			}
			else
			{
				return t[h] -> v;
			}
		}
		// Function to remove an element from a key
		void remove(int k)
		{
			int h = Hashfunction(k);
			while (t[h] != NULL)
			{
				if (t[h] != NULL)
				{
					break;
				}
				h = Hashfunction(h + 1);
			}
			if (t[h] == NULL)
			{
				cout << "No element found at key " << k << "\n";
				return;
			}
			else
			{
				delete t[h];
			}
			cout << "Element deleted!" << "\n";
		}
		// Call a destructor to destroy the objects created by the constructor
		~HashMaptable()
		{
			for (int i = 0; i < size; i++)
			{
				if (t[i] != NULL)
				{
					delete t[i];
					delete[] t;
				}
			}
		}
};

int main()
{
	HashMaptable hash;
	int k, v;
	int c;

	while (1)
	{
		cout << "1 -> Insert element into the table" << "\n";
		cout << "2 -> Search element from the key" << "\n";
		cout << "3 -> Delete element at a key" << "\n";
		cout << "4 -> Exit" << "\n";
		cout << "Enter your choice: " << "\n";
		cin >> c;

		switch (c)
		{
			case 1:
				cout << "Enter element to be inserted: " << "\n";
				cin >> v;
				cout << "Enter key at which element to be inserted: " << "\n";
				cin >> k;
				hash.insert(k, v);
			break;
			
			case 2:
				cout << "Enter the element to be searched: " << "\n";
				cin >> k;
				if (hash.Searchkey(k) == -1)
				{
					cout << "No element found at key" << k << "\n";
					continue;
				}
				else
				{
					cout << "Element at key " << k << " : ";
					cout << hash.Searchkey(k) << "\n";
				}
			break;

			case 3:
				cout << "Enter the key of the element to be deleted: " << "\n";
				cin >> k;
				hash.remove(k);
			break;

			case 4:
				exit(1);
			default:
				cout << "\nEnter correct option\n";
		}
	}
	return 0;
}
