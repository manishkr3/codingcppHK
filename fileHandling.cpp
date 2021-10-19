#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream mout;
    ifstream min;
    // mout.open("text.txt");
    min.open("text.txt");

    // mout << "you are a wonderful guy";
    // mout << "Hare Krishna";
    // string st;
    // cin >> st;
    // mout << st;
    string st;
    while (min.eof() == 0)
    {
        getline(min, st);
        cout << st << endl;
    }
    return 0;
}