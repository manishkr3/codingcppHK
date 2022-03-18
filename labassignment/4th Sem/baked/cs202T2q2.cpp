#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void Display_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << (temp->data) << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Delete_Node(Node **head, int position)
{
    Node *temp = *head;
    Node *previous = NULL;
    if (temp != NULL && temp->data == position)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != position)
        {
            previous = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        previous->next = temp->next;
        delete temp;
    }
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "after deleting the given postion's Node" << endl;
    Delete_Node(&head, 1);
    Display_linked_list(head);
    return 0;
}