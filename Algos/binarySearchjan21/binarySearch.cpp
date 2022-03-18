#include <bits/stdc++.h>
#include <array>
using namespace std;
int bs(int a[], int n, int x) //x, key and lowhigh, startend etc
{

    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2; //!take care of brackets;
        //also the more optimum approach is to l+(h-l)/2. since it avoids overflow condition
        // which generate if h+l is too large.
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
    //!array must be sorted in the Binary Search
    int arr[6] = {-4, -1, 3, 7, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = bs(arr, n, 7);
    cout << "the element is at index : " << ans;
    return 0;
}
/* 
in recursive bS the auxilary space of logN is used while using the stack for recursive calls therefore
iterative approach is better for bS.
 */