#include <iostream>
#include <stdlib.h>
using namespace std;
class twoStacks
{
    int *array;
    int size;
    int top1, top2;

public:
    twoStacks(int n)
    {
        size = n;
        array = new int[n];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }
    void push1(int x)
    {
        if (top1 > 0)
        {
            top1--;
            array[top1] = x;
        }
        else
        {
            cout << "!!Stack Overflow condition "
                 << " By element : " << x << endl;
            return;
        }
    }
    void push2(int x)
    {
        if (top2 < size - 1)
        {
            top2++;
            array[top2] = x;
        }
        else
        {
            cout << "Stack Overflow condition "
                 << " By element : " << x << endl;
            return;
        }
    }
    int pop1()
    {
        if (top1 <= size / 2)
        {
            int x = array[top1];
            top1++;
            return x;
        }
        else
        {
            cout << "Stack UnderFlow condition ";
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 >= size / 2 + 1)
        {
            int x = array[top2];
            top2--;
            return x;
        }
        else
        {
            cout << "Stack UnderFlow condition ";
            exit(1);
        }
    }
};
int main()
{
    twoStacks ts(5);
    ts.push1(7);
    ts.push2(11);
    ts.push2(5);
    ts.push1(21);
    ts.push2(77);
    cout << "Popped element from stack1 is "
         << " : " << ts.pop1()
         << endl;
    ts.push2(40);
    cout << "\nPopped element from stack2 is: "
         << ": " << ts.pop2()
         << endl;
    return 0;
}
