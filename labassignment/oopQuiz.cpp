
// C++ program to join two Vectors
// using set_union() in STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Get the vector
    vector<int> vector1 = {1, 45, 54, 71, 76, 12};
    list <int> list1 = {1, 7, 5, 4, 6, 12};

    // Sort the vector
    sort(vector1.begin(), vector1.end());
    sort(list1.begin(), list1.end());

    // Print the vector
    cout << "First Vector: ";
    for (int i = 0; i < vector1.size(); i++)
        cout << vector1[i] << " ";
    cout << endl;

    // cout << "Second Vector: ";
    // for (int i = 0; i < list1.size(); i++)
    //     cout << list1[i] << " ";
    // cout << endl;

    // Initialise a vector
    // to store the common values
    // and an iterator
    // to traverse this vector
    vector<int> v(vector1.size() + list1.size());
    vector<int>::iterator it, st;

    it = merge(vector1.begin(),
                   vector1.end(),
                   list1.begin(),
                   list1.end(),
                   v.begin());

    cout << "\nAfter joining:\n";
    for (st = v.begin(); st != it; ++st)
        cout << *st << ", ";
    cout << '\n';

    return 0;
}