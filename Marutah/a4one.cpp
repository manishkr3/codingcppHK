#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void stringChecker()
{
    string st;
    int count = 0;
    bool flag = 0;
    cout << "The grammar is: S->aS, S->ab, S->c\n";
    cout << "Enter the string to be checked:\n";
    cin >> st;
    int n = st.size();

    if (st[n - 1] == 'b' && st[n - 2] == 'a')
    {
        for (int i = 0; i < n - 2; i++)
        {
            if (st[i] != 'a')
                flag = 0;
        }
        flag = 1;
    }
    if (st[n - 1] == 'c')
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (st[i] != 'a')
                flag = 0;
        }
        flag = 1;
    }

    if (flag == 1)
        cout << "String is accepted";
    else
        cout << "string is not accepted";
}
int main()
{
    while (true)
    {
        stringChecker();
        cout << "\n";
    }
    return 0;
}