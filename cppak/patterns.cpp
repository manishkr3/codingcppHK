#include<iostream>
using namespace std;
int main(){
    int n=7;
    for (int i = n; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "   ";
        }
        for (int k = 0; k < n-i; k++)
        {
            cout << " * ";
        }

        cout << "\n";
  }
 
    return 0;
}