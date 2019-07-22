/* SELECTION SORT

Sorting input: List of elements like integers.
Output: List of input elements in sorted order.

Simple algorithm used:
 - Find the minimum element of the list.
 - Swap it with the first element in the list.
 - Sort the other elements following the first element.

Illustration:

 5 | 7 | 2 | 10 | 3 | 1 | 6
		      |
		Find min element
 
 1 | 7 | 2 | 10 | 3 | 5 | 6
 |____________________|
 Swap with first element


 1 | 7 | 2 | 10 | 3 | 5 | 6
     |____________________|
   Sort the remaining elements

Other sorting algorithms:
 - Insertion sort, quick sort, merge sort, heap sort, radix sort(LSD, MSD), into sort, adaptive merge sort, shell sort, bubble sort, cocktail shaker sort, gnome sort, bitonic sort, bogo sort. 

*/


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::vector;
using std::swap;

/* This function is present in algorithm by default
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
*/

void print_it(vector<int> vec)
{
	for (i : vec)
	{
		cout << i << ", ";
	}
	cout << "\n";
}

void selection_sort(vector<int> &vec)
{
	int n = vec.size();
	for (int left = 0; left < n; left++)
	{
		int right = left;
		for (int j = left + 1; j < n; j++)
		{
			if (vec[j] < vec[right]) right = j;
		}
		swap(vec[left], vec[right]);
	}
}

int main()
{
	vector<int> vec_1 = {10, 12, 19, 2, 1, 5, 7, 2, 10, 3, 1, 6};
	selection_sort(vec_1);
	print_it(vec_1);

	return 0;
}
