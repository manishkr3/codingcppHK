#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> nums, int target)
    {
        vector<int> v={-1,-1};
        int n = nums.size();
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]
        }
        

        return v;
    }
};
int main()
{
    Solution s;
    vector<int> v={1,2,3,4};
    int t = 4;
   vector<int> ans= s.twoSum(v, t);
   for (auto x:ans)
       cout << x << " ";
}
