#include <bits/stdc++.h>
#include <array>
using namespace std;
int bs(int a[], int n, int x,int l,int h) //x, key and lowhigh, startend etc
{

  int  m = (l + h) / 2;
  if(a[m]==x)
      return m;
    else if(x<a[m])
        return bs(a, n, x, l, m - 1);
    else
        return bs(a, n, x, m + 1, h);
    return -1;
}
int main()
{
    //!array must be sorted in the Binary Search
    int arr[6] = {-4, -1, 3, 7, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = bs(arr, n, 7,0,n-1);
    cout << "the element is at index : " << ans;
    return 0;
}
/* 
in recursive bS the auxilary space of logN is used while using the stack for recursive calls therefore
iterative approach is better for bS.
 */