//?Print the prime numbers between user entered two numbers
#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int a, b, i;
    cout << "enter the two numbers\n";
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}

// floating point exception is due,
//!therefore officially prime numbers are starting from 2,3,5,6,11,...
//!1 is not a prime number
//!break statement skips the entire loop and continue skips to the next iteration.