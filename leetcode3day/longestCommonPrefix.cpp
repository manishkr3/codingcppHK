//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string commonFinder(string s1, string s2)
    {
        string ans;
        int l1 = s1.size();
        int l2 = s2.size();
        int l = l1 < l2 ? l1 : l2;
        for (int i = 0; i < l; i++)
        {
            if (s1[i] == s2[i])
            {
                ans.push_back(s1[i]);
            }else
            {
                return ans;
            }
            
            
        }
        return ans;
    }
    string longestCommonPrefix(vector<string> &strs,int n)
    {
        Solution s;
        string str1 = strs[0];
        string str2 = strs[1];
            string temp = s.commonFinder(str1, str2);
        for (int i = 2; i < strs.size(); i++)
        {
            temp = s.commonFinder(temp, strs[i]);
        }
        return temp;
    }
};
int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    int n = strs.size();
    Solution sol;
    cout << "\n common prefix string is  : " << sol.longestCommonPrefix(strs,n);

    return 0;
}