// chech wheather the input number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n=45,i=0;
    cout << "enter the number :\n";
    cin >> n;
    for ( i = 0; i <= n; i++)
    // {
    //     if (n / i == 0)
    //     {
    //         cout << "number is not prime";
    // break;
    //     }
    // }
    cout << "number is prime";
    return 0;
}
// break statement used for skipping the whole loop
// continue statement is for skipping to the next iteration