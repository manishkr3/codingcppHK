
#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int s, int e, int key)
{
	if (s > e)
		return -1;

	int mid = (s + e) / 2;
	if (arr[mid] == key)
		return mid;

	/* If arr[s...mid] is sorted */
	if (arr[s] <= arr[mid]) {
		/* As this subarray is sorted, we can quickly
		check if key lies in half or other half */
		if (key >= arr[s] && key <= arr[mid])
			return search(arr, s, mid - 1, key);
		/*If key not lies in first half subarray,
		Divide other half into two subarrays,
		such that we can quickly check if key lies
		in other half */
		return search(arr, mid + 1, e, key);
	}

	/* If arr[s..mid] first subarray is not sorted, then arr[mid... e]
	must be sorted subarray */
	if (key >= arr[mid] && key <= arr[e])
		return search(arr, mid + 1, e, key);

	return search(arr, s, mid - 1, key);
}

// Driver program
int main()
{
	int arr[] = {  6, 7, 8, 9, 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 1;
	int i = search(arr, 0, n - 1, key);

	if (i != -1)
		cout << "Index: " << i << endl;
	else
		cout << "Key not found";
}
