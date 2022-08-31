#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    ofstream out1, out2;
    ifstream in;
    out1.open("even.txt");
    out2.open("odd.txt");
    int n = *(&arr + 1) - arr; //for size of array
    cout << "\n " << n;
    while (n--)
    {
        if (n % 2 == 0)
        {
            out1 << arr[n] << endl;
        }
        else
        {
            out2 << arr[n] << endl;
        }
    }

    return 0;
}