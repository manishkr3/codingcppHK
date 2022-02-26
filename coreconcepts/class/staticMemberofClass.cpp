#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
//!its main use is to have a common container which acts as global vaiable for all the objects
//!but at the same time being private does not accessible by unregistered functions for that process.
public:
    void setDataofEmployee()
    {
        cout << "enter the employee id ";
        cin >> id;
        cout << "\n";
    }
    void getDataofEmployee()
    {
        int counr; // due to every object possess this same fuction counr will be shared to all the objects;
                   // but we cant count effectively by using fuction variable bcozf garbage value problem
                   // also we cant able to use it widely;
        count++;
        counr++;
        cout << "employee id is : " << id << "\n";
        cout << "employee counr is : " << counr << "\n";
        cout << "employee count is > " << count << "\n";
    }
} o1, o2, o3;
int Employee ::count;

int main()
{
    o1.setDataofEmployee();
    o2.setDataofEmployee();
    o3.setDataofEmployee();
    o1.getDataofEmployee();
    o2.getDataofEmployee();
    o3.getDataofEmployee();

    return 0;
}
//! though every object has its own set of variables but they all share common member functions.
