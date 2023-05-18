#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int flag, count = 0;
    cout<<"The grammar is: S->aS, S->ab\n";
    cout<<"Enter the string to be checked:\n";
    cin >> st;
    if (st[0] == 'a')
    {
        flag = 0;
        for (count = 1; st[count - 1] != '\0'; count++)
        {
            if (st[count] == 'b')
            {
                flag = 1;
                continue;
            }
            else if ((flag == 1) && (st[count] == 'a'))
            {
                printf("The st does not belong to the specified grammar");
                break;
            }
            else if (st[count] == 'a')
                continue;
            else if ((flag == 1) && (st[count] = '\0'))
            {
                printf("String accepted…..!!!!");
                break;
            }
            else
            {
                printf("String not accepted");
            }
        }
    }
    return 0;
}