#include <iostream>
using namespace std;
int getFactorial(int n)
{
    int ans = 1;//in multiplication take ans as 1
    for (int i = 2; i <= n; i++)
    {
        ans = ans * (i);
    }
    return ans;
}
int main()
{
    int n = 5;
    cout << getFactorial(n);
    return 0;
}