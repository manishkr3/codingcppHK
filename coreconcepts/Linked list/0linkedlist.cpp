#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node//!node is not a keyword.
{
    int data;
    Node *next; //->self referencing structure,it has a pointer which reference itself
    // points to the same element like it
    // every node points to the next node means that it stores address of the next node
    // when the node points to the NULL then it means to declare that end of the LL
};
void linkedListTraversal(Node *ptr)//traversal of ll
{
    while (ptr != NULL)
    {
        cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}
Node *insertAtFirst(Node *head, int data)//just add element before first element
{
    // Node *pt=new Node();
    Node *pt = (Node *)malloc(sizeof(Node));//or new
    pt->data = data; //(*pt).data=data;
    (*pt).next = head;
    return pt;
}
Node *insertAtAIndex(Node *head,int data,int index){//not work at 0th index because we specifically designing it for bw two elements
    Node *pt = (Node *)malloc(sizeof(Node));//we will insert pt
    // Node *pt2 = new Node(); int *t=new int(); while using new keyword we make a good use of constructor
    Node *temp = head;
    int i = index - 2;//to take our pointer to given index//-1 for user extra one and -1 for we want to be at 1 less before Index
    while(i--){//assuming index given by user is i+1 mean 1st for i=0.
        temp = temp->next;
    } // now temp is at index-1 because p already was at 
    pt->data = data;
    pt->next = temp->next; //this should be before the next statement
    temp->next = pt;
    return head;
}
Node*insertAtEnd(Node* head,int data){
    Node *pt = new Node(); // node to insert element at;this is default constructor
    Node *p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = pt;
    pt->next = NULL;
    pt->data = data;
    return head;
}
void displayElementsInSortedOrder(Node*head){
    vector<int> v;
    Node *p = head;
    while (p->next!=NULL)
    {
        v.push_back(p->data) ;
        p = p->next;
    }
    v.push_back(p->data);//for end element
    sort(v.begin(), v.end());
    cout << " the elements of the linked list in sorted order : ";
    for(int x:v){
        cout << x << " ";
    }
}
void reverseNodes(Node*head){

}
int main()
{
    struct Node *head; // it does't matter wheather u write struct or not in C++ don't know bout C
    Node *second;
    Node *third;

    cout << "size of the NOde is : " << sizeof(Node) << "\n";
    head = (Node *)malloc(sizeof(struct Node));//it does't matter wheather u write struct or not in C++ dont know bout C
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));

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
    cout << "lets insert 34 at 3"<<"\n";
    insertAtAIndex(head, 34, 3);
    linkedListTraversal(head);
    cout << "lets insert at End "<<"\n";
    
    insertAtEnd(head, 355);
    linkedListTraversal(head);

    displayElementsInSortedOrder(head);
    return 0;
}
// linked list can be implemented using struct in c and also in cpp
// elements are stored in non contiguous memory locations
// random access is not allowd as element are stored in non contiguous memory locations
/* int*pt=&t;same as int *pt;pt=&t; */