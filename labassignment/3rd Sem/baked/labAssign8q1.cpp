#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> myVector;
    for (int i = 0; i < 10; i++)
    {
        myVector.push_back(i + 1);
    }
    vector<int>::iterator itertr;
    itertr = myVector.begin();
    itertr = itertr + 3;
    myVector.insert(itertr, 43); //new element 43 at 4th position
    itertr = itertr + 3;         //itertr at 7
    myVector.insert(itertr, 73); //new element 73 at 7th position
    cout << "\n original array : ";
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << "  ";
    }
    cout << "\n";

    itertr = myVector.begin();                                  //itertr at begin
    myVector.erase(myVector.begin() + 2, myVector.begin() + 7); //second argument element is not included
    cout << "\n final array  after changes: ";
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << "  ";
    }
    cout << "\n";
}