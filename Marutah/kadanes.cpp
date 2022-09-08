#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int x = 1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            count++;
            cout << i<< " "<<j<<endl;
        }
//yar yahan par dono loop two moving pointers de rahen hn hamen.ooo
    }
    cout << "\n"
         << count;

    return 0;
}