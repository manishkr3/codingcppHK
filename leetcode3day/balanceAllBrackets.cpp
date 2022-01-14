//#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='(')
            {
                st.push('(');
            }else if (s[i]=='[')
            {
                st.push('[');
            }
            else if (s[i]=='{')
            {
                st.push('{');
            }else if (s[i]==')')
            {
                if (st.empty())
                {
                    return false;
                }
                if (st.top()=='(')
                {
                    st.pop();
                }else
                {
                    return false;
                }
                
               
            }
            else if (s[i]==']')
            {
                if (st.empty())
                {
                    return false;
                }
                
                if (st.top()=='[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i]=='}')
            {
                if (st.empty())
                {
                    return false;
                }
                if (st.top()=='{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }


      if (st.empty())
      {
          return true;}
        return false;
    }
};
int main(){

    Solution s;
    if (s.isValid("]"))
    {
        cout << "\n balanced : ";
    }
    else
    {
        cout << "\n not balanced : ";
    }
    
    

    return 0;
}