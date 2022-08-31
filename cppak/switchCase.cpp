//?You have to program a robot to input a to f choices from user by pressing a button and output namaste in different languages
#include<iostream>
using namespace std;
int main(){
    char button;
    cout << "enter choices from a to f\n";
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "Namaste";//Hindi,Sanskrit
        break;
    case 'b':
        cout << "Hello";//english
        break;
    case 'c':
        cout << "Hola";//Portuguese,Spanish
        break;
    case 'd':
        cout << "Merheba";//turkish ,arabic
        break;
    case 'e':
        cout << "Bonjour";//French
        break;
    case 'f':
        cout << "Nin Hao";//Chinese
        break;
    default:
        cout << "I am still Learning!";
        break;
    }
    cout << endl;
    
    return 0;
}
//Ish write He is 9 years old .He lives in Gunai. 
//a,ewer is a good man. He