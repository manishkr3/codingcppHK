#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int m)
    {
        data = m;
        next = NULL;
    }
};
Node *partition(Node *head, int x)
{
    Node *smallerHead = NULL;
    Node *smallerLast = NULL;
    Node *greaterLast = NULL;
    Node *greaterHead = NULL;
    Node *equalHead = NULL;
    Node *equalLast = NULL;
    while (head != NULL)
    {

        if (head->data == x)
        {
            if (equalHead == NULL)
                equalHead = equalLast = head;
            else
            {
                equalLast->next = head;
                equalLast = equalLast->next;
            }
        }

        else if (head->data < x)
        {
            if (smallerHead == NULL)
                smallerLast = smallerHead = head;
            else
            {
                smallerLast->next = head;
                smallerLast = head;
            }
        }
        else
        {
            if (greaterHead == NULL)
                greaterLast = greaterHead = head;
            else
            {
                greaterLast->next = head;
                greaterLast = head;
            }
        }

        head = head->next;
    }

    if (greaterLast != NULL)
        greaterLast->next = NULL;

    if (smallerHead == NULL)
    {
        if (equalHead == NULL)
            return greaterHead;
        equalLast->next = greaterHead;
        return equalHead;
    }
    if (equalHead == NULL)
    {
        smallerLast->next = greaterHead;
        return smallerHead;
    }
    smallerLast->next = equalHead;
    equalLast->next = greaterHead;
    return smallerHead;
}

void Display_limked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    struct Node *head = new Node(9);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(28);
    head->next->next->next->next = new Node(1);
    head->next->next->next->next->next = new Node(24);
    int x = 3;
    head = partition(head, x);
    Display_limked_list(head);
    return 0;
}
