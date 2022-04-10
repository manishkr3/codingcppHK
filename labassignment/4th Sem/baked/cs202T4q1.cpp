#include <iostream>
using namespace std;
int CalculateAckermann(int x, int y)
{
    if (x == 0)
    {
        return y + 1;
    }
    else if ((x > 0) && (y == 0))
    {
        return CalculateAckermann(x - 1, 1);
    }
    else if ((x > 0) && (y > 0))
    {
        return CalculateAckermann(x - 1, CalculateAckermann(x, y - 1));
    }
    return 0;
}
int main()
{
    int A = CalculateAckermann(3, 4);
    cout << A << endl;
    return 0;
}