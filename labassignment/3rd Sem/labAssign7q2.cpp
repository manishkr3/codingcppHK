#include <iostream>
using namespace std;
const int size = 5;

void arrayAccess(int *ar, int n)
{
    try
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
    catch (int ex)
    {
        cout << " index out of bound";
        throw 'R';
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
    catch (char ex)
    {
        cout << "\n \nchanged the code in such a way that it is rethrowed : " << ex;
    }
    return 0;
}