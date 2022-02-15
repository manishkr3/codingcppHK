#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void Display_linked_list(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << (temp->data) << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    Display_linked_list(head);           
    return 0;
}