#include <iostream>
using namespace std;

int palindrome(string s)
{
    int i = 0;
    int j = s.length();
    int flag = 0;
    while (i <= j - 1)
    {
        if (s[i] != s[j - 1])
        {
            cout << "\n it is not a palindrrome  : ";
            break;
            flag++;
            /* code */
        }
        else
        {
            cout << "\n  : " << s[i];
            i++;
            j--;
        }
    };
    if (flag <= 0)
    {
        cout << "\n it is a palindrome : ";
    }

    return 0;
};
int main()
{

    palindrome("abba");
    return 0;
}