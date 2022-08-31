//**top k smallest elements in an array with nlogk complexity
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> topKElements(int *a, int n, int k)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v = {};
    priority_queue<int> pq; //min heap
    vector<int> ans;
    // if n<k condition
    if (n < k)
    {
        cout << "\n array is smaller than the k elements : ";
    }

    for (int i = 0; i < k; i++)
    {
        pq.push(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (a[i] < pq.top())
        {
            pq.pop();
            pq.push(a[i]);
        }
    }

    for (int j = 0; j < k; j++)
    {
        // cout << pq.top() << endl;
        v.push_back(pq.top());
        pq.pop();
    }

    return v;
}
int main()
{
    int k = 3;
    int a[] = {2, 5, 3, 7, 0, 44, 55, 11, 1000};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> ans;
    ans = topKElements(a, n, k);
    cout << "\n your top greatest elements are : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }

    return 0;
}