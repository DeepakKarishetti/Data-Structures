// Implementation of the usage of sets in c++

#include <iostream>
#include <sstream>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
	// implementation of ordered set
	set <string> words;
	string tt = "How much can a wood chuck a woodchuck...";
	istringstream s_in(tt);
	while (!s_in.eof())
	{
		string w;
		s_in >> w;
		words.insert(w);
	}
	
	for (string word : words)
	{
		cout << word << " ";
	}
	cout << "\n"; 
	
	// implementation of un-ordered set
	unordered_set <string> word;
	string t = "How much can a wood chuck a woodchuck...";
	istringstream st_in(t);

	while (!st_in.eof())
	{
		string x;
		st_in >> x;
		word.insert(x);
	}
	for (string z : word)
	{
		cout << z << " ";
	}
	cout << "\n";


	// implementation of an inefficient Sieve of Eratosthenes algorithm: 
	//In mathematics, the Sieve of Eratosthenes is a simple, ancient algorithm 
	//for finding all prime numbers up to any given limit. It does so by iteratively 
	//marking as composite (i.e., not prime) the multiples of each prime, 
	//starting with the first prime number, 2.
	set <int> primes;
	int n = 100;

	// add all primes upto n
	for (int i = 2; i <= n; i++)
	{
		primes.insert(i);
	}

	// remove a;; multiples of primes just leaving the prime numbers
	for (int k = 2; k <= n; k++)
	{
		if (primes.count(k) > 0)
		{
			for (int l = k + k; l <= n; l = k + l)
			{
				primes.erase(l);
			}
		}
	}

	for (int l : primes)
	{
		cout << l << " ";
	}
	cout << "\n";

	// Iteration on sets using iterators
	set <int>::iterator iter = primes.begin();
	while (iter != primes.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << "\n";

	// different implementation using iterators
	for (auto it = primes.begin(); it != primes.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "\n";
}

