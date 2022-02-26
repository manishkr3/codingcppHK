#include <iostream>

using namespace std;

int factorialrec(int n){
    n=n;
    if( n=1 )
    {return 1;}
    return n*factorialrec(n-1);
}

int main()
{
   cout<<factorialrec(5);
   
   return 0;
}