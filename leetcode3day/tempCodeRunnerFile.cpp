//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{

public:
    bool palicheck(int num)
    {
        double rvs_Num = 0;
        double num_value = num;
        while (num > 0)
        {
            rvs_Num = rvs_Num * 10 + num % 10;
            num /= 10;
        }
        if (rvs_Num == num_value)
        {
            return true;
        }

        return false;
    }
};
int main()
{

    int num = 121;
    Solution s;
    if (s.palicheck(num))
        cout << "\n it is palindrome : ";
    else
    {
        cout << "\n it is not a palindrome : ";
    }

    return 0;
}