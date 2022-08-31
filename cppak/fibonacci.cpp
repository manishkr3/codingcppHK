//?print the fibonacci series exactly 0,1,1,2,3,5,...
#include <iostream>
using namespace std;
void printFibonacci(int n)
{
    int t1 = 0, t2 = 1;
    int nextTerm;
    for (int i = 0; i < n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
int main()
{
    int n = 10;
    printFibonacci(n);

    return 0;
}