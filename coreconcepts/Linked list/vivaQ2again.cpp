#include <iostream>
using namespace std;
class Node
{
public:
    string str;
    Node *next;
    Node(string str)
    {
        this->str = str;
        next = NULL;
    }
    Node();
};
void displayLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->str << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
void insertAtTail(Node *&head, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->str = val;
}
bool isPalindrome(string st)
{
    int n = st.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (st[i] != st[n - 1 - i])
        {
            return false;
        }
    }

    return true;
}
void displayPalindromeLL(Node *head)
{
    while (head != NULL)
    {
        if (isPalindrome(head->str))
        {
            cout << head->str << ", ";
        }
        head = head->next;
    }
    cout  << endl;
}
int main()
{
    Node *head = new Node("saras");
    insertAtTail(head, "man");
    insertAtTail(head, "ava");
    insertAtTail(head, "lal");
    displayLL(head);
    cout << "Palindromes from linked list are : ";
    displayPalindromeLL(head);
    return 0;
}