#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    { 
        auto en = nums.end();
        for (auto i = nums.begin()+1; i != nums.end()-1; i++)
        {
        //    cout << "\n this is : ";
            if (*(i)==*(i+1))
            {
                // cout << "\n loop : ";
                nums.erase(i+1);
                i--;
            }
          
        }
        auto j = nums.begin();
        if (*j==*(j+1))
        {
            nums.erase(nums.begin());
        }
       
        // cout << "\n you : ";
        int size = nums.size();
        // cout << size;
        return size;
    }
  
};
int main(){
    Solution sol;
    vector<int> nums = {1, 1, 1, 1, 2, 2, 3, 3, 4,4,4,4};
    cout << sol.removeDuplicates(nums) << endl;
    
    for (int x : nums)
        cout << " " << x;

    return 0;
}