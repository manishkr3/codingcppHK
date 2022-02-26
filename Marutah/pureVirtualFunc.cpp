#include <iostream>
using namespace std;
class Base
{

public:
    virtual void func(); //!pure virtual function
    //therefore if i am declaring the virtual function in the base class obviously without defining it
    // then its called Pure virtual function and class itself Abstract Class
    //you have to define it inthe derived class wheather you use it or not.
    void print()
    {
        cout << "Hare Krishna";
    }
} a;
class Derived : public Base
{

public:
    // print();
    void func() { cout << "Hare Krishna"; }
};
int main()
{
    cout << "yo man desi";
    a.print();
    return 0;
}