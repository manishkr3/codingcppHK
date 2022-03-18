// November 6 ,2021
//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        unordered_map<int, int> map;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {   
            //first will ensure that 
            if (map.find(target - nums[i]) != map.end() && map[target - nums[i]] != i) /* 
            why interchanging these two positions has a greate impact on the working
            ans. because if first complement exist in the map then only their is  a question of is it is equal to the element itself or not,
            and also the map.find() somehow works in nearly O(1) */
            {

                auto it = map.find(target - nums[i]); //its just returns the pointer nothing else its very easy  to  may be binary search it is doing.
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
        }

        return ans;
    }
};
int main()
{

    vector<int> v = {-1, -2, -3, -4, -5};
    vector<int> ans;
    Solution s;
    ans = s.twoSum(v, -8);
    for (int x : ans)
        cout << x << "\n";
    return 0;
}