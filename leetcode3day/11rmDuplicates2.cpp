#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        const auto it = unique(begin(nums), end(nums));
        int size = static_cast<int>(it - begin(nums));
        nums.resize(std::distance(nums.begin(), nums.begin() + size)); //to resize the vector and remove undefined space

        return size;
    }
};
int main()
{
    vector<int> nums{1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 6};
    Solution s;
   //to resize the vector and remove undefined space
    //created by unique
    for (int x : nums)
        cout << x << " ";

    return 0;
}