#include <iostream>
using namespace std;
int mergeSort(int *a, int s, int e)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //base case
    if (s>e)
    {
        return 0;
    }

    int mid = s + (e - s) / 2;

    //left part sort
    mergeSort(a, s, mid);

    //right part sort
    mergeSort(a, mid + 1, e);

    return -1;
}
int main()
{

    int a[] = {1, 4, 2, 5, 3, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int ans = mergeSort(a, 0,n-1);
    cout << "\n your answer is : " << ans;

    return 0;
}