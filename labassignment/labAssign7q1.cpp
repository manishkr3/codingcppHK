#include <iostream>
using namespace std;
const int size = 5;

void arrayAccess(int *ar, int n)
{
    if (n > size)
    {
        throw(n);
    }
    else
    {
        cout << "the " << n << "th element is : " << ar[n - 1] << "\n";
    }
}

int main()
{
    int arr[size] = {1, 2, 3, 4, 5};
    try
    {
        arrayAccess(arr, 4);
        arrayAccess(arr, 2);
        arrayAccess(arr, 5);
        arrayAccess(arr, 6);
    }
    catch (int ex)
    {
        cout << "/n index out of bound";
    }
    return 0;
}