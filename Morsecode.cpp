#include <iostream>
using namespace std;

string morseEncode(char x) //Morse code Table
{

    switch (x)
    {
    case 'A':
        return ".-";
    case 'B':
        return "-...";
    case 'C':
        return "-.-.";
    case 'D':
        return "-..";
    case 'E':
        return ".";
    case 'F':
        return "..-.";
    case 'G':
        return "--.";
    case 'H':
        return "....";
    case 'I':
        return "..";
    case 'J':
        return ".---";
    case 'K':
        return "-.-";
    case 'L':
        return ".-..";
    case 'M':
        return "--";
    case 'N':
        return "-.";
    case 'O':
        return "---";
    case 'P':
        return ".--.";
    case 'Q':
        return "--.-";
    case 'R':
        return ".-.";
    case 'S':
        return "...";
    case 'T':
        return "-";
    case 'U':
        return "..-";
    case 'V':
        return "...-";
    case 'W':
        return ".--";
    case 'X':
        return "-..-";
    case 'Y':
        return "-.--";
    case 'Z':
        return "--..";
    case ' ':
        return " / ";
    case '1':
        return ".----";
    case '2':
        return "..---";
    case '3':
        return "...--";
    case '4':
        return "....-";
    case '5':
        return ".....";
    case '6':
        return "-....";
    case '7':
        return "--...";
    case '8':
        return "---..";
    case '9':
        return "----.";
    case '0':
        return "-----";
    default:
        cout << "Found invalid character: " << x << ' '
             << endl;
        exit(0);
    }
}

void morseCode(string s)
{

    for (int i = 0; s[i]; i++)
    {
        cout << morseEncode(s[i]);
        cout << " ";
    }
    cout << endl;
    cout << "I've used:" << endl;
    cout << "space between same part of the letter nothing or \"\"" << endl;
    cout << "spaces between letters = \" \"" << endl;
    cout << "and Spaces between words\" / \" " << endl;

    cout << endl;
}

int main()
{
    string s = "CAT IS AN ANIMAL";
    morseCode(s);
    return 0;
}
