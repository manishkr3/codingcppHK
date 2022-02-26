#include <iostream>
using namespace std;
int main()
{   

    //?Q. What is new keyword?
    //what new does is dynamically do work of initializing and allocating memory to a data type specified 
    //and returns the starting address
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is " << *ptr<<"\n";
    // new is a keyword used to dynamically initialize some integer or arr of integers in the heap.
    int *m = new int(335);//integer storing 335
     // so m stores memory address of the *m the value like a pointer;
    cout <<"address of m "<< m << "\n"
         << "the value of m is : " << *m << "\n";
    cout << "now after freeing the memory by delete"<<"\n";
    delete m;             // free the memory
    cout <<"address of m "<< m << "\n"
         << "the value of m is : " << *m << "\n";
    int *arr = new int[3]; // array of size 3
    arr[0] = 1;
    *(arr + 1) = 5; //its just simple array of size 3 nothing complicated in it
    //jyada hi dimag laga liya tha tene kuch:)
    //// it is still working because the memory is not contiguous each one is seperate block
    //! infact there are  3 blocks of memory allocated
    arr[2] = 3;
    // delete arr;//used to free the memory after it no guarantee of values are still there or not
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
//*https: // www.youtube.com/watch?v=2Y0b9nFA9s8