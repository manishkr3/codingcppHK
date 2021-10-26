#include <bits/stdc++.h>
using namespace std;

int findMidElement(int arr[], int n)
{
	int suffixSum[n];l
	suffixSum[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
		suffixSum[i] = suffixSum[i + 1] + arr[i];

	int prefixSum[n];
	prefixSum[0] = arr[0];
	for (int i = 1; i < n; i++)
	{
		prefixSum[i] = prefixSum[i - 1] + arr[i];
		if (prefixSum[i] == suffixSum[i])
			return arr[i];
	}

	return 0;
}

int main()
{
	int arr[] = {2,7, 4, 2, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	if (findMidElement(arr,n)==0	)
	{
		cout << endl<<	"your array doesn't posses any such property ,which you are searching for :)";
	}
	else
	{
	cout << findMidElement(arr, n);
	}
	

	return 0;
}
