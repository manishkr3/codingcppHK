#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            if (nums[0] == val)
            {
                nums.erase(nums.begin());
                return 0;
            }

            return 1;
        }
        for (auto i = nums.begin(); i < nums.end(); i++)
        {
            int n = nums.size();
            if (n == 0)
            {
                return 0;
            }
            else if (n == 1)
            {
                if (nums[0] == val)
                {
                    nums.erase(nums.begin());
                    return 0;
                }

                return 1;
            }
            if (*i == val)
            {
                nums.erase(i);
                i--;
            }
        }
        auto i = nums.begin();
        if (*(i) == val)
        {
            nums.erase(i);
        }

        return nums.size();
    }
};
int main()
{
    vector<int> nums{1, 2, 2, 2, 3, 3, 4, 5};
    Solution s;
    cout << s.removeElement(nums, 2);

    return 0;
}