#include<iostream>
using namespace std;
int King(int X, int Y)
{
    // Enter your code here
    int a = 0, b = 0, c = 0, d = 0, total = 0;
    int x = X, y = Y;
    a = x - 1;
    b = x + 1;
    c = y - 1;
    d = y + 1;
    if (a < 1)
        a = 1;
    if (c < 1)
        c = 1;
    if (b > 8)
        b = 8;
    if (d > 8)
        d = 8;
    total = (b - a + 1) * (d - c + 1);
    return total-1;
}
int main(){
    int m=King(2,1);
    cout << m;
    return 0;
}