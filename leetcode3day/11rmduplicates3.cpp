#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n==0)
        {
            return 0;
        }else if (n==1)
        {
            return 1;
        }
        
        
        for (auto i = nums.begin() + 1; i != nums.end(); i++)
        {
            if (*i == *(i - 1))
            {
                nums.erase(i);
                i--;
            }
           
       }
       return nums.size();
        }
};
int main(){
    vector<int> nums{1, 1, 1, 1, 2, 2, 4, 5, 6, 6, 6, 7};
    Solution s;
    s.removeDuplicates(nums);
    for(auto x:nums)
        cout << x << "\n";
    return 0;
}