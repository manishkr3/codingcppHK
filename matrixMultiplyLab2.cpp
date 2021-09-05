#include <iostream>
using namespace std;
int c[2][2];

class Matrix
{
    int a[2][2];
    // int b[2][2];
public:
    int i, j, k;
    friend void multiplication(Matrix x, Matrix y);
    void getdata();
    void display();
} mat1, mat2;

void Matrix::getdata()
{
    cout << "Enter the values for the first matrix" << endl;

    cout << "\n Matrix 1, Row 1:" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> mat1.a[i][j];
        }
    }
    cout << "Enter the values for the second matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> mat2.a[i][j];
        }
    }
}

void multiplication(Matrix x, Matrix y)
{
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                c[i][j] += mat1.a[i][k] * mat2.a[k][j];
            }
        }
    }
}

void Matrix::display()
{
    cout << "The Resultant Matrix is: \n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
}

int main()
{
    Matrix x;
    x.getdata();
    multiplication(mat1, mat2);
    x.display();

    return 0;
}
