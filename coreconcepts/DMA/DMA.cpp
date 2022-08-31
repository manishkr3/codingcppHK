#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

    /* static memory allocation done before the program's execution whereas the DMA is done during the 
 programs execution or run time , it is more efficient,there is memory reusability and memory can be
 freed when not required. */
 //dma serves a lot of fuctions at runtime not possible for sma
   //! g++ dma.cpp -o dmaa.exe;size .\dmaa.exe ->give size of each segment used
   //!we should avoid using calloc() for DMA because it does an extra task of initialising evey space
   //!with zero (like in case of map and unordered_map)
    int n = 4;
    //  cin >> n;
    cout << "enter elements\n";
    int *ptr = (int *)malloc(n * sizeof(int));
    //malloc returns an void type pointer of the heap memory chunk which typecasted to the 
    //required type of the ptr, where we want to store the address.
    /* because at the time of allocation malloc don't know what type of data is to be used so it
    simply make a void pointer to that location offcourse on the basis of only size
    but new does this task of typecasting implicitly */
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
    
   

    return 0;
}
//!doing extra labour in your tasks makes it inefficient.
//the garbage values are just like some values stored previously in that location by the os.
