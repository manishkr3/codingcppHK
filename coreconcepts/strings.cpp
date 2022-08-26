#include <iostream>
using namespace std;

int main()
{

    string st = "it is one way";
    char stt[] = "it is another way";
    cout << st.size() << "\n";//string provides me lots of functions which other ways not
    cout << st << "\n";
    cout << stt << "\n";
    string s = "HareKrishna";
    cout << s.substr(0, 5)<<endl;
    return 0;
}