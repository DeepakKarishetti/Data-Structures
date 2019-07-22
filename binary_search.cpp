#include <iostream>

using namespace std;

int binary_search(int arr[], int left, int right, int val)
{
	while (right >= left)
	{
		int mid = left + (right - left) / 2;

		// if val present at mid
		if (arr[mid] == val)
		{
			return mid;
		}	
		// if val smaller than mid then has to be on the left
		else if (arr[mid] < val)
		{
			return binary_search(arr, left, mid - 1, val);
		}
		// else has to be on right
		else
		{
		return binary_search(arr, mid+1, right, val);
		}
	}
	// if val not present in the given array
	return -1;
}

int main()
{
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int x;
	for (i : arr)
	{
		cout << i << " ";
	}
	cout << "\n";
	cout << "Enter the number to be found: " << "\n";
	int n = sizeof(arr) / sizeof(arr[0]); 
	cin >> x;
	int result = binary_search(arr, 0, n - 1, x);
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
				
