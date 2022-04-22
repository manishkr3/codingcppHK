#include <iostream>
#include<stack>
using namespace std;
class Node
{
public:
    char data;
    Node *next;
    Node(char newData)
    {
        data = newData;
        next = NULL;
    }
};
void insertNewNodeAtHead(Node *&head, char data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertNewNodeAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void showAllData(Node *head)
{
    if (head == NULL)
    {
        cout << "linked list is empty!";
        return;
    }
    else
    {
        while (head != NULL)
        {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL";
    }
}
bool checkPalindrome(Node *head)
{
    stack<char> stack;
    Node *temp = head;
    while (temp != NULL)
    {
        stack.push(temp->data);
        temp = temp->next;
    }
    while (head != NULL)
    {
        if (head->data == stack.top())
        {
            stack.pop();
            head = head->next;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    Node *head = NULL;
    insertNewNodeAtTail(head, 'g');
    insertNewNodeAtTail(head, 'o');
    insertNewNodeAtTail(head, 'g');
    showAllData(head);
    cout << checkPalindrome(head)<<"\n";
    return 0;
}