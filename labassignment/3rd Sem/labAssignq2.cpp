//#include<bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<string, int> m;

    // insert elements in random order
    m.insert(pair<string, int>("student1", 331));
    m.insert(pair<string, int>("student2", 332));
    m.insert(pair<string, int>("student3", 333));
    m.insert(pair<string, int>("student4", 334));
    m.insert(pair<string, int>("student5", 335));
    m.insert(pair<string, int>("student6", 336));
    m.insert(pair<string, int>("student7", 337));
    m.insert(pair<string, int>("student8", 338));
    m.insert(pair<string, int>("student9", 339));
    m.insert(pair<string, int>("student10", 330));
    map<string, int>::iterator itr;
   
    string str;
    cout << "\n enter the student name : ";
    cin >> str;
    itr = m.find(str);
    if (itr==m.end())
    {
        cout << "\nstudent is not in the class";
    }
    else
    {
        cout<<"\nthe student rollno. is : "<<itr->second;
    }
    
    

    return 0;
}