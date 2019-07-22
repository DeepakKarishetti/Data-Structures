// Simple program explaining the merge sort algorithm in c++

#include <iostream>

using namespace std;

// function to merge the broken arrays
void merge(int *arr, int s, int e)
{
	int mid = (s + e) / 2;
	// two arrays starting point and mid point init as pointers
	int i = s;
	int j = mid + 1;
	int k = s;

	int temp[100];

	while (i <= mid && j <= e)
	{
		if (arr[i] < arr[j])
		{
			temp[k++] = arr[i++];
		}
		else
		{
			temp[k++] = arr[j++];
		}
	}
	// copying the remaining elements from the arrays
	while (i <= mid)
	{
		temp[k++] = arr[i++];
	}
	while (j <= e)
	{
		temp[k++] = arr[j++];
	}

	// now copy all the elements from the temp array to the original array
	for (int i = s; i <= e; i++)
	{
		arr[i] = temp[i];
	}
}

//function performing merge sort	
void merge_sort(int arr[], int s, int e)
{
	// base case when we have only one element to sort
	if (s == e)
	{
		return;
	}

	// Divide the given array by its mid point
	int mid = (s + e) / 2;

	// recursively call the arrays 
	// left half of array from s to mid element
	// right half of array from mid+1 to e
	merge_sort(arr, s, mid);
	merge_sort(arr, mid + 1, e);

	// merging the two parts
	merge(arr, s, e);
}

int main()
{
	int arr[] = {2, 4, 2, 1, 6, 3, 9, 12, 10, 19, 15, 18, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	merge_sort(arr, 0, n-1);

	for (i : arr)
	{
		cout << i << " ";
	}
	cout << "\n";
	return 0;
}
