#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    s.insert(33);
    s.insert(34);
    s.insert(88);
    s.insert(345);
    s.insert(22);
    cout << s.count(33)<<"\n";
    cout << s.count(22)<<"\n";
    cout << s.count(23)<<"\n";
    s.erase(33);
    cout << s.count(33)<<"\n";
    set<int>::iterator it;
    cout << "set elements are"<<"\n";
    for (it = s.begin(); it != s.end();it++){
        cout << *it<<" ";
    }
    cout << "\n";
    return 0;
}
/* all elements in sets are in sorted order
    random access like arrays s[3] is not allowded in the sets you have to do it 
    using iterators.
    ! it+=2 is an invalid statement
    to advance multiple steps do it++ multiple times.it--,--it,++it are also valid
    for iterators. and by 5 time increments 5logn will time due to red and black 
    trees algo behind all this management.
    ! s.end() is an iterator to a non-existent element after the last element
    s.find(x) returns iterator to the value x;otherwise s.end() O(logN)
    s.erase(it) erase the element at it; O(logN)
    to delete the smallest element from the set s.erase(s.begin())
    if s.find(x) == s.end() the NOT FOUND condition.
   */