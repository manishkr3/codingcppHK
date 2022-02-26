/* #include <iostream>
using namespace std;

class Swap
{
	int temp, a, b;

public:
	Swap(int a, int b)
	{
		this->a = a;
		(*this).b = b;
	}

	friend void swap(Swap &);
};

void swap(Swap &s1)
{
	cout << "\n"
		 << s1.a << " " << s1.b;

	s1.temp = s1.a;
	s1.a = s1.b;
	s1.b = s1.temp;
	cout << "\n"
		 << s1.a << " " << s1.b;
}

int main()
{
	Swap s(4, 6);
	swap(s);
	return 0;
}
 */
#include <iostream>
using namespace std;

// function definition to swap values
void swapMeth1(int &n1, int &n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
void swapMeth2(int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main()
{

	// initialize variables
	int a = 1, b = 2;

	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// call function to swap numbers
	swapMeth1(a, b);

	cout << "\nAfter swapping method 1" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swapMeth2(&a, &b);

	cout << "\nAfter swapping method 2" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	int m = 4;
	int *p = &m;
	int &q = m;
	cout << p << " " << m << " " << q;

	return 0;
}