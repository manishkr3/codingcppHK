// A prime number is a whole number with exactly two divisors(1 and number itself). This also means that -ve numbers also not prime.
#include <iostream>
using namespace std;
bool isPrime(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i * i <= x; i++)
    { // i*i <=x if not then we will count 4 as prime.
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{

    for (int i = 0; i < 101; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}