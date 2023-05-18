#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool bEntry = false;
    bool stringAccepted = false;
    cout << "The given grammar is: \nS -> aS \nS -> Sb \nS ->ab\n ";
        cout
         << "Enter your string:";
    cin >> s;
    int l = s.length();
    if (s[0] == 'a')
    {
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'b')
            {
                bEntry = true;
                stringAccepted = true;
            }
            else if (s[i] == 'a')
            {
                if (bEntry)
                {
                    stringAccepted = false;
                    break;
                }
            }
        }
    }
    stringAccepted ? cout << "String is accepted !!!\n" : cout << "String NOT accepted...\n";
    if (stringAccepted)
    {
        cout << "\nDo you want it's parse tree? (y/n): ";
        char ch;
        cin >> ch;
        if (ch == 'y')
        {
            cout << "Parse tree is: \n";
        }
        int na = 0, nb = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'a')
            {
                na++;
            }
            else if (s[i] == 'b')
            {
                nb++;
            }
        }
        cout << "S\n";
        string space = "";
        for (int i = 0; i < na - 1; i++)
        {
            cout << space << "| \\" << endl;
            cout << space << "a S\n";
            space += " ";
        }
        for (int i = 0; i < nb - 1; i++)
        {
            cout << space << "| \\" << endl;
            cout << space << "S b\n";
        }
        cout << space << "| \\" << endl;
        cout << space << "a b\n";
    }
}