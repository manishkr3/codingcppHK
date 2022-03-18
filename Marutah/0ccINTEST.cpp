#include <iostream>
using namespace std;

int main()
{

    int n, k;
    int count = 0;
    cin >> n;
    cin >> k;
    while (n)
    {
        int num;
        cin >> num;
        if (num % k == 0)
        {
            count++;
        }
    }

    return count;
}