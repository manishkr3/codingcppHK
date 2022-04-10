void reverse(Node *);
bool compareLists(Node *, Node *);
bool isPalindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *second_half;
    Node *prev_of_slow = head;
    Node *midnode = NULL;
    bool res = true;

    if (head != NULL && head->next != NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;

            prev_of_slow = slow;
            slow = slow->next;
        }

        if (fast != NULL)
        {
            midnode = slow;
            slow = slow->next;
        }

        second_half = slow;
        prev_of_slow->next = NULL;
        reverse(second_half);
        res = compareLists(head, second_half);
        reverse(second_half);
        if (midnode != NULL)
        {
            prev_of_slow->next = midnode;
            midnode->next = second_half;
        }
        else
            prev_of_slow->next = second_half;
    }
    return res;
}
void reverse(Node *head_ref)
{
    Node *prev = NULL;
    Node *current = head_ref;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head_ref = prev;
}
bool compareLists(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 && temp2)
    {
        if (temp1->data == temp2->data)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return 0;
    }

    if (temp1 == NULL && temp2 == NULL)
        return 1;

    return 0;
}