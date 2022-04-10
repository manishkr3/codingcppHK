#include <iostream>
using namespace std;
int main()
{
    int totalProcesses, totalResources, row, col, k; //
    totalProcesses = 5;                              // p0,p1,p2 etc.
    totalResources = 3;                              // A,B,C etc.
    int alloc[5][3] = {{0, 1, 0},
                       {2, 0, 0},
                       {3, 0, 2},
                       {2, 1, 1},
                       {0, 0, 2}};
    int max[5][3] = {{7, 5, 3},
                     {3, 2, 2},
                     {9, 0, 2},
                     {2, 2, 2},
                     {4, 3, 3}};
    int avail[3] = {3, 3, 2};
    int f[totalProcesses], ans[totalProcesses], ind = 0;
    for (k = 0; k < totalProcesses; k++) // to initialize f[] all elements to zero
    {
        f[k] = 0;
    }
    int remainingNeed[totalProcesses][totalResources];
    for (row = 0; row < totalProcesses; row++)
    {
        for (col = 0; col < totalResources; col++){
           remainingNeed[row][col] = max[row][col] - alloc[row][col]; cout << remainingNeed[row][col];
        }

        cout << endl;
    }
    int y = 0;
    for (k = 0; k < 5; k++) // to run check 25 times
    {
        for (row = 0; row < totalProcesses; row++)
        {
            if (f[row] == 0)
            {
                int flag = 1;
                for (col = 0; col < totalResources; col++)
                {
                    if (remainingNeed[row][col] > avail[col])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    ans[ind++] = row;
                    for (y = 0; y < totalResources; y++)
                        avail[y] += alloc[row][y];
                    f[row] = 1;
                }
            }
        }
    }
    int flag = 1;
    for (int row = 0; row < totalProcesses; row++)
    {
        if (f[row] == 0)
        {
            flag = 0;
            printf("The following system is not safe");
            break;
        }
    }
    if (flag == 1)
    {
        printf("Following is the SAFE Sequence\totalProcesses");
        for (row = 0; row < totalProcesses - 1; row++)
            printf(" P%d ->", ans[row]);
        printf(" P%d", ans[totalProcesses - 1]);
    }
    return (0);
}
