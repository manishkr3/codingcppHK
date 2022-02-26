#include <iostream>
using namespace std;
class comp
{

public:
    int a;
    static int b;
    void show(int e)
    {
        a = e;
        cout << a;
    }
};
int main()
{
    comp a1, b1, c1;
    a1.a = 4;
    cout << a1.a << a1.b; //!Why its happening to be errored
    a1.show(3);
    return 0;
}