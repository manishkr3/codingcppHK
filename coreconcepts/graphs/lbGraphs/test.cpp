#include <iostream>
using namespace std;
int main(){
    int n=100;
    int sum;
    int x ;
    int y ;
    int z ;
    int a ;
    for (int i = 0; i < n; i++)
    {
         x = i + 1;
         y = i + 2;
         z = i + 2;
         a = i + 2;
        sum = x + y + z + a;
        
    }
    cout << sum << endl;
    return 0;
}
