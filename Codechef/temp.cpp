#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int k = 0;
    // for (int q = 0; q < 5; q++)
    // {
    //     cout << "\n"
    //          << q;
    // }

    for (int j = 1; j < 5; j++)
    {
        // cout << "\n why : ";
        float need = ceil(1.0 * n / (k + 1));
        cout << " for k= " << k << "need=" << need << "**";
        k++;
    }

    cout << "\n another one is\n : ";
    // k = 0;
    // for (int m = 1; m < 5; m++)
    // {
    //     for (int l = 1; l < 5; l++)
    //     {
    //         int ceel = ceil(1.0 * n / (k + 1));
    //         cout << "  "
    //              << ceel;
    //     }
    //     k++;
    // }

    return 0;
}