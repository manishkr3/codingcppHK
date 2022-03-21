/* #include <iostream>
#include <vector>
using namespace std;
int main()
{

    cout << "enter the list of numbers to sort:"
         << "\n";
    vector<int> v;
    int n = 5, key = 0;
    for (int i = n; i >= 1; i--)
    {
        int temp;
        //  cin >> temp;
        v.push_back(i + 1);
    }
    for (auto i = v.begin() + 1; i != v.end(); i++)
    {
        for (auto j = i-1; j != v.begin(); j--)
        {
            if (*j > *i)
            {
                key = *i;
                //  v.erase(i);
                v.insert(j, key);
                break;
            }
        }
    }

    for (auto x : v)
        cout << x << " ";
    return 0;
}
 */
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    cout << "enter the elements to the array\n";
    int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
