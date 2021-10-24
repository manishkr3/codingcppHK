#include <iostream>
using namespace std;

int reverseString(string s)
{
    int i = 0;
    int l = s.length();
    while (i < l - 1)
    {
        swap(s[i], s[l - 1 - i]);
    }cout << s;
    return 0;
}
int main()
{

    cout << "\n reverse string is : ";
    reverseString("manish");
    return 0;
}