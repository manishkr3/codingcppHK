#include <iostream>
using namespace std;
class Marks
{
    int a;

public:
    void setData(float a)
    {
        this->a = a; //!this pointer points to the calling object and implicitly passed to the calling function
    }                //without this pointer a is a is local variable of set data
    //!this is also used to return the object from member function.
    void getData()
    {
        cout << a << "\n";
    }
    Marks & objReturner(){
        return *this;//return object after some change
    }
} c1;
int main()
{
    c1.setData(23.4);
    c1.getData();

    return 0;
}

//this is a keyword which is a pointer which points to the object which invokes the member function.
// the address to this pointer is passed implicitly by the function. two types of arguments are passed
// while calling a fuction impliicit and explicit arguments.
//also parameters written in the function call are Actual and that in ehe definition are formal .