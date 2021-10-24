#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class sstack
{
    int size;
    int top;
    vector<int> v;

public:
    sstack(int x)
    {
        size = x;
        top = -1;
    };
    void push(int ele)
    {
        if (top == size - 1)
        {
            cout << "\n sstack is full : ";
        }
        else
        {
            v.push_back(ele);
            top++;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "\n stack is empty  ";
        }
        top--;

        v.pop_back(); //pop function doesn't require argument
        return v[top];
    }
};
int main()
{
    int count = 4;
    sstack st(count);
    st.push(1);
    st.push(4);
    st.push(5);
    st.push(9);
    st.push(3);

    cout << st.pop() << "\n";
    cout << st.pop() << "\n";
    cout << st.pop();
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<v[i];
    // }

    return 0;
}