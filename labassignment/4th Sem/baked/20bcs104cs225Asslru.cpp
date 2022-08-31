#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class lru
{
    list<int> el;                                
    unordered_map<int, list<int>::iterator> ref; 
    int n;                                       
public:
    lru(int cap)
    {
        n = cap;
    }
    void insert(int);
    void print();
};
void lru::insert(int val)
{
    if (ref.find(val) == ref.end())
    { 
        if (ref.size() == n)
        { 
            int x = el.back();
            el.pop_back(); 
            ref.erase(x);  
        }
    }
    else
    {
        el.erase(ref.find(val)->second); 
    }
    el.push_front(val);    
    ref[val] = el.begin(); 
}
void lru::print()
{
    for (auto it = el.begin(); it != el.end(); it++)
        cout << *it << " ";
    cout << endl;
}
int main()
{
    lru cache(3); 
    cache.insert(1); 
    cache.insert(2); 
    cache.insert(3); 
    cache.insert(2); 
    cache.insert(4); 
    cache.insert(2); 
    cache.insert(5); 
    cache.print();
}