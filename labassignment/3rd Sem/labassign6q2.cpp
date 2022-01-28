#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 0)
        {
            throw 0;
        }
        else if (x == 1)
        {
            throw '1';
        }
        else if (x == -1)
        {
            throw 0.1;
        }
        else
        {
            throw "ttt";
        }
    }
    catch (int i)
    {
        cout << "\n caught an integer exception";
    }
    catch (char c)
    {
        cout << "\n caught a character exception";
    }
    catch (double e)
    {
        cout << "\n caught a double exception";
    }
    catch (...)
    {
        cout << "\n catch all exception ,default catch";
    }
}
int main()
{
    test(0);
    test(1);
    test(-1);
    test(3);
    return 0;
}