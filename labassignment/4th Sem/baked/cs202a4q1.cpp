void Retain_and_Delete(Node *head, int M, int N)
{
    Node *current = head;
    Node *temp1;
    int count;

    while (current)
    {
        for (count = 1; count < M && current != NULL; count++)
            current = current->next;

        if (current == NULL)
            return;

        temp1 = current->next;
        for (count = 1; count <= N && temp1 != NULL; count++)
        {
            Node *temp2 = temp1;
            temp1 = temp1->next;
            free(temp2);
        }
        current->next = temp1;
        current = temp1;
    }
}
