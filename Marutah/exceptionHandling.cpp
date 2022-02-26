#include <iostream>
using namespace std;

int main()
{

    int denom, numen, result;
    cout << "\n enter the numenator and denomenator \n";
    cin >> numen >> denom;
    try
    {
        if (denom == 0)
        {
            // throw denom;
            throw(denom);
        }
        else
        {
            result = numen / denom;
            cout << "\n result is " << result;
        }
    }
    catch (int ex)
    {
        cout << "\n denomenator can't be " << ex;
    }

    return 0;
}