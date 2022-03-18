#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream file1, file2;
    file1.open("source1.txt");
    file2.open("source2.txt");

    ofstream file;
    file.open("target.txt");

    if (!file1.is_open() || !file2.is_open() || !file.is_open())
        return 1;

    while (!file1.eof() && !file2.eof())
    {
        int a, b;
        file1 >> a;
        file2 >> b;

        if (a > b)
        {
            file << b << " ";
            file1.unget();
        }
        else
        {
            file << a << " ";
            file2.unget();
        }

        while (!file1.eof())
        {
            int a;
            file1 >> a;
            file << a << " ";
        }

        while (!file2.eof())
        {
            int a;
            file2 >> a;
            file << a << " ";
        }

        file1.close();
        file2.close();
        file.close();
    }
}
