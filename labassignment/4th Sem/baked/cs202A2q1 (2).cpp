/* //Q.1:
//Linear Search
#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {0, 3, 5, 6, 7, 8, 10, 22};
    int n = *(&arr + 1) - arr;
    int x = 7;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "the index of the number is " << i;
            return 0;
        }
    }
    cout << "number not in the array";
    return 0;
}
 */

//binary Search
#include <bits/stdc++.h>
#include <array>
using namespace std;
int bs(int a[], int n, int x) //x, key and lowhigh, startend etc
{

    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (x == a[m])
        {
            return m;
        }
        else if (x < a[m])
        {
            h = m - 1;
        }
        else if (x > a[m])
        {
            l = m + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {-4, -1, 3, 7, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = bs(arr, n, 7);
    cout << "the element is at index : " << ans;
    return 0;
}

/* Binary search has O(logN) time complexity because on every iteration search space reduced 
to half.And linear search has time complexity O(n). */
