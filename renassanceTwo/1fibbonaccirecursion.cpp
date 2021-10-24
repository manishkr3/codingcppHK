#include <iostream>
using namespace std;
int fibb(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    return fibb(n - 1) + fibb(n - 2);
}
int main()
{

    cout << "fourth element is "<<fibb(4) << "\n";//it actually outputs the one next element.
    for (int i = 0; i < 4; i++)
    {
        cout << fibb(i) << "\n";
    }

    return 0;
}