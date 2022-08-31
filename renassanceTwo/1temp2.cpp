#include <iostream>
using namespace std;

bool palindrome(string str)
{
    int l = str.length() -1;
    bool flag;
    int i = 0;
    while (i < l)
    {

        if (str[l] == str[i])
        {
            flag = true;
        }
        else
        {
            return false;
        }
        l--;
        i++;
    }
    return true;
};
int main()
{

    if (palindrome("oapao"))
    {
        cout << "its a palindrome";
    }
    else
    {
        cout << "its not a palindrome";
    }
}