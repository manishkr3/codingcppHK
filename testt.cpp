#include <iostream>
using namespace std;

class Shape
{
public:
    void getDAta(float *a, float *b)
    {
        float len, bre;
        cout << "Enter the first dimention:\n";
        cin >> len; //to take input from the user
        cout << "Enter the second dimention:\n";
        cin >> bre;
        cout << "\n";
        *a = len;
        *b = bre;
    }

    virtual void displayArea() = 0; // pure virtual function
};

class rectangle : public Shape
{
    float l, b; // l=length , b=bredth
public:
    void displayArea()
    {
        cout << "Now for Rectangle\n";
        getDAta(&l, &b);
        cout << "\nArea of rectangle : " << l * b << "\n";
    }
};
class triangle : public Shape
{

    float h, b;
    float a;

public:
    void displayArea()
    {
        cout << "Now For Triangle\n";
        getDAta(&h, &b);
        a = 0.5 * h * b;
        cout << "\nArea of triangle : " << a;
    }
};
class circle : public Shape
{
    float r;
    float agarbageValueforSecondArgument = 0; //because circle only need radius for area
    //therefore for adjustment
public:
    void displayArea()
    {
        cout << "Now for Circle\n";
        cout << "\nEnter radius  : ";
        getDAta(&r, &agarbageValueforSecondArgument);
        cout << "\nArea of circle : " << (3.146 * r * r);
    }
};
int main()
{
    rectangle r;
    r.displayArea();
    triangle t;
    t.displayArea();
    circle c;
    c.displayArea();
}