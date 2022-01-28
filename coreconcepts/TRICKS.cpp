/* 
if(rem==0)return 1;
        return 0;
        can be written as return (rem==0)
 */
//abs(3-4) is like modulus function and thus returns always positive value.
// /*max_element(a,a+n) returns max element similarly *min_element(a,a+n) returns
//element.
//reverse(a,a+n),
//by default array passes as pointer call by reference
//sort(a,a+n) sort(a,a+n,greater<int>())
//count(a,a+n,3) last is number to be counted
//!unordered_map has less complexity then map arond logN less because it does not has
//!hassle of keeping map sorted.
#include <bits/stdc++.h>
using namespace std;

int main()
{
        int l = 5, h = 6;
        cout << (l + h) / 2;
        cout << l + h / 2; //! this is most important the use of brackets.
        return 0;
}
// if else if statements work fine without curly braces for single statements only
/* 
 if(x==a[m])
            {res = m;
        h = m - 1;}
        else if (x<a[m])
            h = m - 1;
        else if (x>a[m])
            l = m + 1; */