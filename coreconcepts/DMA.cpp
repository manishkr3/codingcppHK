#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

    /* static memory allocation done before the program's execution whereas the DMA is done during the 
 programs execution or run time , it is more efficient,there is memory reusability and memory can be
 freed when not required. */
  /*  //! g++ dma.cpp -o dmaa.exe;size .\dmaa.exe give size of each segment used
    int n = 4;
    //  cin >> n;
    cout << "enter elements\n";
    int *ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << "\n";
    }
    int z = 1;

    ptr = (int *)realloc(ptr, (z) * sizeof(int)); //new memory locations are initialized by garbage values
    cout << "after increasing size by 6  unit"
         << "\n"; //we even decresed the size but the memory locations are not freed thats why they
                  //till now stored the data.
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << "\n";
    }
    free(ptr); 
    */
    //?Q. What is new keyword?
    //new is a keyword used to dynamically initialize some integer or arr of integers in the heap.
    int *m = new int(40); //so m stores address of the *m the value like a pointer;
    delete m;//free the memory
    cout << m<<"\n"<<*m<<"\n";
    int *arr = new int[3];//arr of size 3
    arr[0] = 1;
    *(arr+1) = 5;//it is still working because the memory is not contiguous each one is seperate block
    //! infact there are  3 blocks of memory allocated 
    arr[2] = 3;
    //delete arr;//used to free the memory after it no guarantee of values are still there or not
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}