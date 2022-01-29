#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream fout;//to write in file we use ofstream object.
    fout.open("file.txt");//fout is default for open but if you wanna use a fstream object then
    //you have to use stream modes.
    //if file doesn't exist it got created and if exist then its content got deleted in default mode

    fout << "first String"
         << "second stinrg"
         << " third one"
         << "\n"
         << "m" << endl
         << "k";
    fout.close();//closing file everytime is essential to avoid unknown errors.
    return 0;
}