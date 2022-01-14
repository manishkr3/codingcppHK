//#include<bits/stdc++.h>
#include<iostream>
// using namespace std;
class Solution
{
public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k)
    {
        //code here
        int n = r - l + 1;
        int min = INT_MIN;
        int mini;
        int max = INT_MAX;
        for (int j = 0; j < k;j++){
            for (int i = 0; i < n; i++)
            {
                /*     if (arr[i] > min)
                min = arr[i]; */
                if (arr[i] < max)
                    max = arr[i];
            }
            mini = max;
            arr[]
            }

        return arr[k - 1];
    }
};
int main(){
    int arr[] = {1,4,2,3,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    Solution s;
    s.kthSmallest(arr, 0, n - 1, 3);

    return 0;
}