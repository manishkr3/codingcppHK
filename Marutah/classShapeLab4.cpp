#include <iostream>
using namespace std;

class Shape
{
public:
    void getDAta(double *a, double *b)
    {
        double len, bre;
        cout << "Enter the first dimension:\n";
        cin >> len; //to take input from the user
        cout << "Enter the second dimension:\n";
        cin >> bre;
        cout << "\n";
        *a = len;
        *b = bre;
    }

    virtual void display_Area() = 0; // pure virtual function
};

class rectangle : public Shape
{
    double l, b; // l=length , b=bredth
public:
    void display_Area()
    {
        cout << "Now for Rectangle\n";
        getDAta(&l, &b);
        cout << "Area of rectangle : " << l * b << "\n";
    }
};
class triangle : public Shape
{

    double h, b;
    double a;

public:
    void display_Area()
    {
        cout << "Now For Triangle\n";
        getDAta(&h, &b);
        a = 0.5 * h * b;
        cout << "Area of triangle: " << a << "\n";
    }
};
class circle : public Shape
{
    double r;
    double agarbageValueforSecondArgument = 0; //because circle only need radius for area
    //therefore for adjustment and to store as garbage the second argument
public:
    void display_Area()
    {
        cout << "Now for Circle\n";
        cout << "Enter radius two times :\n ";
        getDAta(&r, &agarbageValueforSecondArgument);
        cout << "Area of circle : " << (3.141 * r * r);
    }
};
int main()
{
    rectangle r;
    r.display_Area();
    triangle t;
    t.display_Area();
    circle c;
    c.display_Area();
}