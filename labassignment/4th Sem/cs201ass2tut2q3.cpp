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
Node *Insert_at_begin(Node *head, int insert_num)
{
    Node *temp = new Node(insert_num);
    temp->next = head;
    return temp;
}
Node *Insert_at_End(Node *head, int insert_num)
{
    Node *temp = new Node(insert_num);
    Node *current = head;
    if (head == NULL)
    {
        return temp;
    }
    while (current->next != NULL)

        current = current->next;
    current->next = temp;
    return head;
}
Node *Insert_at_given_postion(Node *head, int position, int insert_num)
{
    Node *temp = new Node(insert_num);
    if (position == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++)
        current = current->next;
    if (current == NULL)
        return head;

    temp->next = current->next;
    current->next = temp;
    return head;
}
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
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "Linkedlist Before insert a new element at the begin: ";
    Display_linked_list(head);
    head = Insert_at_begin(head, 5);
    cout << "Linked list After inserting a new elment at begin: ";
    Display_linked_list(head);
    head = Insert_at_End(head, 6);
    cout << "Linkedlist after Inserting an element at end:";
    Display_linked_list(head);
    head = Insert_at_given_postion(head, 3, 10);
    cout << "Linked list After insert an elemnt at a given postion: ";
    Display_linked_list(head);
    return 0;
}