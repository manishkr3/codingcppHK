#include <iostream>
using namespace std;
double a, b, result;
void read()
{
    cout << "\n enter the two double numbers\n";
    cin >> a >> b;t
}
void calc()
{
    if (b == 0)
    {
        throw(b);
    }
    else
    {
        cout << "\n result is " << a / b;
    }
}

int main()
{

    try
    {
        read();
        calc();
    }
    catch (double ex)
    {
        cout << "\n exception divide by zero";
    }

    return 0;
}