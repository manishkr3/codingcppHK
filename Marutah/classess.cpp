#include<iostream>
using namespace std;
class Student
{
    int rollNo;
    string name;
    

public:
void showData(){
    cout << "the name is : " << this->name<<endl;
    cout << " the roll no is :" << this->rollNo<<endl;
}
void getData(){
    cout << " enter the name : ";
    cin >> name;
    cout << " enter the rollno: ";
    cin >> rollNo;
}
}s1;
int main()
{
    Student s2,s3;
    s1.getData();
    s2.getData();
    s1.showData();
    s2.showData();
    s3.showData();
    s3.showData();
  
    return 0;
}

