#include<iostream>
using namespace std;
struct abc//creating our own data type.UDD
{
    int a;
    char b;
};

int main(){

    int a = 10;

    // cin>>a;

          cout << &a<<"\n";
    //int b=&a; we cant do this because we need another pointer storing data type which can store the address<<"\n";
    //!pointer is a data type which is used to store the address of another data type.
    //!for every data type the type of the pointer is going to be different.
    int *ptr;
    ptr = 0;
    // ptr = 100;//!you cant assign an integer to a pointer why bcz the purpose of ptr is to be - a pointer to an integer
    //its entirely a new data type.
    char c;
    // ptr = &c;//!here ptr is pointing to an integer not a char.
    abc obj;
    abc *p=&obj;
    //int *p1 = &obj;//!a pointer needs to have same data type of storing thing.
    cout <<"the value of p is "<< p << "\n";
    //!as soon as pointer created it accupies some space in the memory according to compiler.
         cout << sizeof(p) << " " << sizeof(ptr);//so my compiler being 64bit gives 8bytes to pointer.

    return 0;
}
