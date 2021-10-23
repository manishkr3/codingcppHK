#include <iostream>
using namespace std;

template <class x>
void largestInArray(x *ar, int n)
{
    x largest = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (largest < ar[i])
        {
            largest = ar[i];
        }
    }
    cout << "\n the largest element is  : " << largest;
}

int main()
{
    int iarr[] = {1, 99, 3, 4, 55};
    float farr[] = {2.3, 4.5, 55.6, 33.111};
    largestInArray(iarr, sizeof(iarr) / sizeof(iarr[0]));
    largestInArray(farr, sizeof(farr) / sizeof(farr[0]));
    return 0;
}