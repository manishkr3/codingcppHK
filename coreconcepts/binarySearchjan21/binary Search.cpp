#include <bits/stdc++.h>
using namespace std;
int bs(int a[], int n, int e)
{
    int l = 0, h = n - 1;
    while (l < h)
    {
        int m = l + h / 2;
        if (e == m)
            return m;
        if (e < m)
        {
            h = m - 1;
        }
        if(e>m)
            l = m + 1;
    }
}
int main()
{
    //!array must be sorted in the Binary Search
    int arr[6] = {-4, -1, 3, 7, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "the element is: " << bs(arr, n, 7);
    return 0;
}