#include <bits/stdc++.h>
using namespace std;
int bs(int a[], int n, int x)
{
    int l = 0, h = n - 1;
    int res;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (x == a[m])
        {
            res = m;
            l = m + 1;
        }
        else if (x < a[m])
            h = m - 1;
        else if (x > a[m])
            l = m + 1;
    }
    return res;
}
int main()
{
    int a[] = {1, 5, 5, 5, 5, 8, 9};
    int n = *(&a + 1) - a;
    cout << bs(a, n, 5);
    return 0;
}