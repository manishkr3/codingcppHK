// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int bSearch(int *a, int n, int x)
{
	int s = 0;
	int e = n - 1;
	while (s <= e)
	{
		int m = s + (e - s) / 2;
		if (a[m] == x)
			return m;
		else if (a[m] > x)
		{
			e = m - 1;
		}
		else
		{
			s = m + 1;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = bSearch(arr, n, 1);
	cout << "the index of the element is " << m;

	return 0;
}

/* // C++ program to implement recursive Binary Search

#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int m = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[m] == x)
			return m;

		// If element is smaller than m, then
		// it can only be present in left subarray
		if (arr[m] > x)
			return binarySearch(arr, l, m - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, m + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}
 */