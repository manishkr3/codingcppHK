#include <iostream>
#include <stack>
using namespace std;
stack<char> st;
string Reverse_string;
void insert_at_bottom(char x)
{
    if (st.size() == 0)
        st.push(x);
    else
    {
        char a = st.top();
        st.pop();
        insert_at_bottom(x);
        st.push(a);
    }
}
void reverse_Stack()
{
    if (st.size() > 0)
    {
        char x = st.top();
        st.pop();
        reverse_Stack();
        insert_at_bottom(x);
    }
}
int main()
{
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    cout << "Original Stack" << endl;
    cout << "1"
         << " "
         << "2"
         << " "
         << "3"
         << " "
         << "4"
         << endl;
    reverse_Stack();
    cout << "Reversed Stack : "
         << endl;
    while (!st.empty())
    {
        char p = st.top();
        st.pop();
        Reverse_string += p;
    }
    cout << Reverse_string[3] << " " << Reverse_string[2] << " "
         << Reverse_string[1] << " " << Reverse_string[0] << endl;
    return 0;
}