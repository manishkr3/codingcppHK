#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next; //->slf referencin structure,it has a pointer which reference itself
    // points to the same element like it
    // every node points to the next node means that it stores address of the next node
    // when the node points to the NULL then it means to declare that end of the LL
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    // struct Node *pt=new struct Node();
    struct Node *pt = (struct Node *)malloc(sizeof(struct Node));
    pt->data = data; //(*pt).data=data;
    (*pt).next = head;
    return pt;
}
struct Node *insertAtIndex(struct Node *head,int data,int index){
    struct Node *pt1 = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *pt2 = new struct Node(); int *t=new int();
    struct Node *p = new struct Node();
    p = head->next;
    while((index-1)--){
        ptr=d
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    cout << "size of the NOde is : " << sizeof(Node) << "\n";
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // now the dynamic memory allocation is done we can link all then locations using pointers.
    head->data = 7;
    head->next = second;
    //?can we make LL without dynamic memory allocation
    /* yes u can but that will not fulfill the purpose of using required memory at runtime and also to free memory
    not to used anymore. you bind to use a big chunk of static memory then. Basically u not able to use features
    of DMA for which the ll is designed for. */
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    linkedListTraversal(head);
    cout<<"lets insert 36"<<"\n";
    head = insertAtFirst(head, 36);
    linkedListTraversal(head);
    return 0;
}
// linked list can be implemented using struct in c and also in cpp
// elements are stored in non contiguous memory locations
// random access is not allowd as element are stored in non contiguous memory locations
/* int*pt=&t;same as int *pt;pt=&t; */