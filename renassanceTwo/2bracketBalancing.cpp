//#include<bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
bool bracketbalancer(string s, int l)
{
    stack<char> st;
    bool flag;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i] == ')')
        {

            flag = true;
            st.pop();
        }
        else if (st.empty() && s[i] == ')')
        {
            return false;
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
    return true;
}
int main()
{

    string str = "(((())))";
    int l = str.length();
    if (bracketbalancer(str, l))
    {
        cout << "\n balanced : ";
    }
    else
    {
        cout << "\n not balanced : ";
    }

    return 0;
}