#include <iostream>
using namespace std;
class Student
{
    string name;
    int age;
    bool gender; // 1 for male and 0 for female
    // this data here is private and thus can only be accessed by member functions
public:
    void getInfo(Student &a)
    {
        cout << "enter the details "
             << "\n";
        cin >> a.name;
        cin >> a.age;
        cin >> a.gender;
    }
    void showInfo(Student &a)
    {
        cout << "your details are : \n";
        cout << a.name << "\n";
        cout << a.age << "\n";
        cout << a.gender << "\n";
    }
};
int main()
{
    int n = 1;
    Student arr[3];
    for (int i = 0; i < n; i++)
    {
        arr[i].getInfo(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i].showInfo(arr[i]);
    }

    return 0;
}
// objects are instances of class used to store data
/*
! A pointer of type base class can be used to point to the address of the object of the derived
!  class or a function in the derived class. But not the vice versa
 you should declare variables always private and to change them you create some member functions
because they will have naturally the access of them

/* every objects shares the same member function and have different ; means member functions are static by
default */
*/