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
        cout << "\ncheck 1 : \n";
        arrayAccess(arr, 6);
        cout << "\ncheck 2 : \n";

        arrayAccess(arr, 2);
        cout << "\nlt returns again back to the try block : \n";
        arrayAccess(arr, 5);
        arrayAccess(arr, 6);
    }
    catch (int ex)
    {
        cout << "/n index out of bound";
    }
    cout << "\ncontrol does't return to try block but continues from catch block on : ";
    return 0;
}