#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string st="Hare Krishna and be happy";//Opening files using constructor and writing to it.
    ofstream moutr("file1.txt");
    moutr << st;
    moutr.close(); //! only after closing the file we can change the stream.

    string st2;
    ifstream in("file1.txt"); //opening file using constructor and reading it.
    in >>st2;// and by taking input this way only the word till a space or newline are taken.
    getline(in, st2);//getline continues from the cursor which is at the end of hare
    //also getline used to get the whole line.
    cout << st2;
    in.close();


    ofstream fout;         //to write in file we use ofstream object.
    fout.open("file.txt"); //fout is default for open but if you wanna use a fstream object then
    //you have to use stream modes.
    //if file doesn't exist it got created and if exist then its content got deleted in default mode

    fout << "first String"
         << "second stinrg"
         << " third one"
         << "\n"
         << "m" << endl
         << "k";
    fout.close(); //closing file everytime is essential to avoid unknown errors.
    return 0;
}
//! the fstream include is required for operating on files using the C++
/* 
output stream: program to file
input stream: file to program
cout: program to console
cin: console to program 

thus Program solely the centre of reference of all streams.
*/
/* 
the useful classes in C++ to interact with files are:
1. fsreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

*/
/* 
in order to work with files in C++ you have to open it. Primarily there are two ways to open 
a file:
1. using a constructor
2. using the member function open() of the class
 */
/* 
! Read write modes save and read file in the mode specified binary or default like variable vise
! which we can read from file and objects wise which we cant read.
technically read write in always binary mode but on a more abstract level it depends on the mode
in which you are opening the file. 
 */