#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class LinkedList
{

    Node *head;
    public:
    LinkedList() { head = NULL; }
    void reverseLL()
    {
        Node *current = head;
        Node *prev = NULL, *next = NULL;
        while (current != NULL)
        {
            
            next = current->next;
            
            current->next = prev;
            
            prev = current;
            current = next;
        }
        head = prev;
    }
   
    void displayLL()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
int main()
{
    LinkedList ll;
    ll.push(4);
    ll.push(8);
    ll.push(16);
    ll.push(12);
    cout << "Given linked list\n";
    ll.displayLL();
    ll.reverseLL();
    cout << "\nReversed Linked list \n";
    ll.displayLL();
    return 0;
}
