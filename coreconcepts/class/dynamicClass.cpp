#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    void setNumber(int rl, int img)
    {
        real = rl;
        imaginary = img; //?is it right syntaxing
    }
    void getNumber()
    {
        cout << real << "+" << imaginary << "i"
             << "\n";
    }
};
int main()
{
    int n = 5;
    Complex *p = new Complex[n];
    Complex *p1 = p;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << "\n";
        p->setNumber(a, b);
        p++;
    }
    p = p1;
    for (int i = 0; i < n; i++)
    {
        p->getNumber();
        p++;
    }
    
    return 0;
}