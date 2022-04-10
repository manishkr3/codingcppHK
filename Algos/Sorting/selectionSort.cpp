#include <iostream>
using namespace std;
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minInd = -1;
        for (int j = i; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                minInd = j;
            }
        }
        swap(a, i, minInd);
        cout << "\nmin is : " << min;
    }
}
int main()
{

    int arr[] = {1, 4, 2, 3, 5, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}