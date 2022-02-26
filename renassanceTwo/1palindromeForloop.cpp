#include <iostream>
using namespace std;

int main()
{
    bool check = true;
    string st = "abyba";
    int l = st.length();
    for (int i = 0; i < l; i++)
    {
        if (i > l - 1 - i)
        {
            break;
        }
       

        if (st[i] == st[l - i - 1])
        {
            check = true;
            cout << st[i] << "\n";
        }
        else
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "\n it is palindrome : ";
    }
    else
    {
        cout << "\n it is not palindaromi : ";
    }

    return 0;
}