#include <bits/stdc++.h>
using namespace std;
int bsmn(int a[], int n)
{
    int l = 0, h = n - 1;
    int mn=INT_MAX;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (a[m]<mn)
        {
            mn = a[m];
            h = m - 1;
            cout << 4;
        }
        
        else if (mn > a[m])
           { l = m + 1;
           cout << 5;
           
           }
        //    cout << 7;
        //    cout << 7;
    }
    return mn;
}
int main()
{
    int a[] = {1, 5, 5, 5, 7, 8, 9};
    int n = *(&a + 1) - a;
    cout << bsmn(a, n);
    return 0;
}
//? Q. find the number of times array is rotated.
//also here our focus is on the element in the array not the x
//number of times rotation is equal to the new shifted indes=x of the minimum element or pivet.
//so problem is now reduced to find pivet point i.e the minimum element idex