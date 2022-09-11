#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
void printList(list<int> l){
    for(int x: l)
        cout << x << " ";
    cout << endl;
}
int main(){
    list<int> l;//its a bidirectional linked list.
    for (int i = 0; i < 10; i++)
    {
        l.push_back(i + 1);
    }
    printList(l);
    l.push_back(23);
    l.push_front(5);
    l.push_front(98);
    printList(l);
    l.pop_back();
    printList(l);
    l.pop_front();   
    l.sort();
    printList(l);
    l.remove(5);//it removed all occurances of 5 from the list.   
    printList(l);
    return 0;
}