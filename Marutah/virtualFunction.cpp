#include <iostream>
using namespace std;
class base
{

public:
    virtual void vfunc()
    {
        cout << "You are astonishing and thus shoud wake at 3:30 am";
    }
};
class Derived : public base
{

public:
    void vfunc()
    {
        cout << "Yes you will you are farantic seeker";
    }
};
int main()
{
    base *p, b;
    Derived d;
    p = &d; //poiter of type base class is pointing towards theaddress of  object of derive class
    p->vfunc();
    //lets try reverse
    /*    Derived *ptr, br;
    base dr;
    ptr = &dr;//only the pointer of type base class can point to the address of the  object of the derived class
    return 0; */
    //!hence viceversa can't possible
}