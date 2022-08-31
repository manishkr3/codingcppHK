#include<iostream>
using namespace std;
int main(){

 // a>>n : a/2^n
 // a<<n : a*2^n
 /*
    sizeof(int) : returns size of the variable
    condition:X?Y : ternary or conditional operator returns value of X if condition is true or else value of Y
therefore modulus operator c=a>b?a-b:b-a;
    cast operator: char c='a'; cout<<int(a);
    comma operator: a=(2,4,6); means a =6 the last value of comma is a.
 */
 char c = 'a';
 cout << int(c); // here a is typecasted to 97
 return 0;
}