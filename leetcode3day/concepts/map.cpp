//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{

    unordered_map<int, int> map;
    vector<int> v;

    for (int i = 0; i < nums.size(); i++)
        map[nums[i]] = i;
    for (auto it = map.cbegin(); it != map.cend(); ++it)
    {
        std::cout << "first " << it->first << "second " << it->second << " "
                  << "\n";
    };

    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find((target - nums[i])) != map.end() && i != map[target - nums[i]])
        {
            auto it = map.find((target - nums[i]));
            v.push_back(i);
            v.push_back(it->second);
            break;
        }
    }

    return v;
}
int main()
{
    // vector<int> nums;
    // for (int i = 0; i < 5; i++)
    // {
    //     nums.push_back(i + 1);
    // }

    // for (int i = 0; i < nums.size(); i++)
    //     map[nums[i]] = i;
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> ans;
    ans = twoSum(v, 5);
    for (int x : ans)
        cout << x << "\n";
    return 0;
}