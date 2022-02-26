//*top k most frequent elements in the given array.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> topKElements(int *a, int n, int k)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v = {};
    priority_queue<int, vector<int>, greater<int>> pq; //min heap
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
        if (a[i] > pq.top())
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
    ans = v;
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << endl;
    }
    return v;
}

int kMostFrequentElements(int *a, int n, int k)
{
    int largest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    int fre[largest + 1] = {0}; //frequency array indexes
    //largest elment +1 sized elment is needed oto ot ot to makek a frequency array
    for (int i = 0; i < largest; i++)
    {
        fre[a[i]]++;
    }
    int count = 0;
    //now fre k largest in a array fre we use heap
    topKElements(fre, n, k);
    return 0;
}
int main()
{
    int k = 3;
    int a[] = {2, 5, 3, 7, 6, 6, 6, 7, 7, 2, 2, 2, 2, 2, 5, 1}; //7,6,2 if k=3
    int n = sizeof(a) / sizeof(a[0]);
    kMostFrequentElements(a, n, k);

    return 0;
}