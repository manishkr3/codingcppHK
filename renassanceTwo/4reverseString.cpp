#include <iostream>
using namespace std;

int main()
{
    string st = "Manish Kumar is a Good Guy";
    cout << "\n enter a string to reverse : ";
    // cin >> st;
    getline(cin,st);
    cout << "\n reverse string is : ";
    for (int i = 0; i < st.length(); i++)
    {
        cout << st[st.length() - 1 - i];
    }

    return 0;
}