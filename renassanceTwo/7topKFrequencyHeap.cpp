// #include <bits/stdc++.h>
//*top k frequent elements in the given array.
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int  (int *a, int n)
{
    int largest = 7;
    int fre[largest + 1] = {0};//frequency array indexes 
    //largest elment +1 sized elment is needed oto ot ot to makek a frequency array
    for (int i = 0; i < largest; i++)
    {
        fre[a[i]]++;
    }
    int count = 0;
    for (int i = 0; i < largest; i++)
    {
         count++;
    }
    
    return count;
}

int main()
{

    int a[] = {2, 5, 3, 7, 6, 6, 6, 7, 7, 2, 2, 2, 5, 1}; //-1,-1,5,-1,7
    int n = sizeof(a) / sizeof(a[0]);

    // vector<int> ans;
    int ans;
    ans = (a, n);
    cout << ans;

    return 0;
}