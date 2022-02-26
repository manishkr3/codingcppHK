// #include <iostream>
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    vector<string> name;
  
    fstream f;
    int i,n;

   
    f.open("file12.txt", ios ::out); // open f for writing
    cout << "Writing Student information to the f :- " << endl;
    cout << "Enter number of students " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string inp;
        cout << "Enter Name : ";
        cin >> inp;
        name.push_back(inp);
    }
    sort(name.begin(), name.end());

    for (i = 0; i < n; i++)
        f << name[i] << endl;

        f.close(); // close the f

    f.open("file12.txt", ios ::in); // open f for reading
    cout << "\nReading Student information to the f :- " << endl;
    string st;
    // while (!f.eof())
    while(n--)
    {
        f >> st;
        cout << st << endl;
    }
    cout << "writing done on another f another12.txt";
    f.open("another12.txt", ios::out);
    // for (i = 0; i < 3; i++)
    // {
    //     // read an object from a f
    //     f.read((char *)&name[i], sizeof(name[i]));
    //     cout << "\nName :: " << name[i] << endl;
    // }

    f.close(); // close the f

    return 0;
}