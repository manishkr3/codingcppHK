#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    vector<int> m;
    int sum, max;
    int n = prices.size();
    if (n == 0)
        return 0;
    for (int i = 0; i < n; i++)
    {
        max = *max_element(prices.begin(), prices.end());
        m[i] = prices[i] - max;
    }
    return *max_element(m.begin(), m.end());
}
int main(){
    vector<int> v = {1, 4, 6, 3, 44, 8};
    int ans = maxProfit(v);
    cout << ans;

    return 0;
}