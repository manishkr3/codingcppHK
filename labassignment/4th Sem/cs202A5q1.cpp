#include <iostream>
using namespace std;
int const size_of_stack = 100;
int stack_array[size_of_stack];
int top = -1;
void push(int value)
{
    if (top >= size_of_stack - 1)
        cout << "Stack is in Overflow condition" << endl;
    else
    {
        top++;
        stack_array[top] = value;
    }
}
void pop()
{
    if (top <= -1)
        cout << "Stack is empty" << endl;
    else
    {
        cout << "The popped element is" << stack_array[top] << endl;
        top--;2
    }
}
void display_Stack()
{
    if (top >= 0)
    {
        cout << "The Stack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << stack_array[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}
int main()
{
    int choice, value_to_be_push;
    cout << "Enter a choice among the choice give below" << endl;
    cout << "Press 1 for Push in stack" << endl;
    cout << "Press 2 for Pop from stack" << endl;
    cout << "Press 3 for Display stack" << endl;

    cout
        << "Press 4 for Exit" << endl;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> value_to_be_push;
            push(value_to_be_push);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display_Stack();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice plz choose a right choice" << endl;
        }
        }
    } while (choice != 4);
    return 0;
}
