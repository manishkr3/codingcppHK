
#include <iostream>
using namespace std;
class Solution
{

public:
    bool palicheck(int x)
    {
        ios::sync_with_stdio(false);
        cin.tie(0);

        if (x < 0 || (x % 10 == 0 && x != 0))//! because 100 is not a palindrome
        {
            return false;
        }
        int rvsx = 0;
        while (x > rvsx)
        {
            rvsx = rvsx * 10 + x % 10;
            x /= 10;
        }
        return (rvsx == x || rvsx / 10 == x);
    }
};
int main()
{

    int x = 123454321;
    Solution s;
    if (s.palicheck(x))
        cout << "\n it is palindrome by logn : ";
    else
    {
        cout << "\n it is not a palindrome  by log n: ";
    }

    return 0;
}