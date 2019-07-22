// Simple program implementation of binary search algorithm in c++ and is applicable only on SORTED lists

#include <iostream>

using namespace std;

// function to compute the binary search
int binary_search(int arr[], int size, int val)
{
	int low = 0;
	int high = size - 1;	
	int mid;
	// runs until the end condition is met like recursively
	while (low <= high)
	{
		mid = (low + high) / 2;
	
		if (val == arr[mid])
		{
			return mid;
		}
		else if (val > arr[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;	
		}
	}
	return -1;
}	

int main()
{
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int x;
	
	cout << "Enter the number to be found: " << "\n";
	int n = sizeof(arr) / sizeof(arr[0]); 
	cin >> x;
	int result = binary_search(arr, n, x);
	if (result == -1)
	{	
		cout << "Element entered is not present in the array!" << "\n";
	}
	else
	{
		cout << "Element is present at index: " << result << "\n";
	}

	return 0;
}
				
