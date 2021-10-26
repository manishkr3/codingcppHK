
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int bSearch(int *a, int n, int x)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (a[mid] <= a[e])
        {
            if (a[mid] == x)
                return mid;
            else if (a[mid] < x && x < a[e])
            {
                e = mid + 1;
            }
            else
            {
                s = mid - 1;
            }
        }
        else if (a[mid] >= a[e])
        {
            if (a[mid] == x)
                return mid;
            else if (a[mid] > x && a[s] < x)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {9, 10, 11, 1, 2, 3, 4, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mid = bSearch(arr, n, 10);
    cout << "the index of the element is " << mid;

    return 0;
}