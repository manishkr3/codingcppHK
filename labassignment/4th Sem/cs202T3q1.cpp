#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
     Node *next;
};
void push( Node **head_ref, int new_data)
{
     Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
bool detectLoop( Node *h)
{
    unordered_set<Node *> s;
    while (h != NULL)
    {
        if (s.find(h) != s.end())
            return true;
        s.insert(h);
        h = h->next;
    }
    return false;
}
int main()
{
     Node *head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    head->next->next->next->next = head;
    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;
}
