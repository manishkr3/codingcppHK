// #include <bits/stdc++.h>
//dont use the torchorous header file too often its just destroys the esstacy
#include <iostream>
using namespace std;
int bSearch(int *a, int n, int x)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (x == a[mid])
        {
            return mid;
        }

        if (a[s] < a[mid] && x < a[mid])
        { // left array is sorted
            if (x > a[s] && x < a[mid])
            { // x lies between s and mid index
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }

            if (a[mid] < a[e] && x > a[mid])
            {                               // right array is sorted
                if (x > a[mid] && x < a[e]) //*to avoid the egde case we write x<=a[e]
                {                           // x lies between mid and e index
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mid = bSearch(arr, n, 4);
    cout << "the index of the element is " << mid;

    return 0;
}