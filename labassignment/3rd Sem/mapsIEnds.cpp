#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> STUDENT;

    for (int i = 0; i < 5; i++)
    {
        STUDENT[i] = "STU" + to_string(i);
    }

    cout << "Enter key to replace: ";
    int k;
    cin >> k;

    cout << "Enter value: ";
    string v;
    cin >> v;

    STUDENT[k] = v;

    STUDENT.erase(STUDENT.begin());

    for (auto i : STUDENT)
        cout << i.first << " " << i.second << endl;
}