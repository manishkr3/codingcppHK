#include<iostream>
using namespace std;
int main(){

 
    return 0;
}
/*
Prefix and Postfix expressions can be evaluated faster than an infix expression
this is because we don't need to process any brackets or follow operator precedence
rule.
Prefix: +-*abcd=(a*b)-(c+d)
Postfix: ab*cd+-=(a*b)(c+d)-=(a*b)-(c+d)
infix: (a*b)-(c+d)

postfixes are mostly used and in these cpu have to pass only one time left to
right.

 */