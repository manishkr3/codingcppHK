#include <iostream>
#include <vector>
using namespace std;

class sstack
{
    int sizee;
    int top;
    vector<int> v;

public:
    sstack(int x)
    {
        sizee = x;
        top = -1;
    };
    void push(int ele)
    {
        if (top == sizee - 1)
        {
            cout << "\n sstack is full to the max sizee : "<<sizee;
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
            return -1;
        }
        else
        {
            int temp = v[top];
            v.pop_back(); //pop function doesn't require argument
            top--;
            return temp;
        }
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

    cout << "\n"
         << st.pop();
    cout << "\n"
         << st.pop();
    cout << "\n"
         << st.pop();
    cout << "\n"
         << st.pop();
    cout << "\n"
         << st.pop();
    cout << "\n"
         << st.pop();
 

    return 0;
}