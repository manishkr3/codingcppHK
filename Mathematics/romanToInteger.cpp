#include <iostream>
#include <map>
using namespace std;
int romanToInt(string s)
{
    map<char, int> m;
    char I, V, X, L, C, D, M;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int sum = 0;
    int n = s.length();
    for (int i = 1; i < n; i++)
    {
        if (m[s[i]] > m[s[i - 1]])
        {
            sum -= m[s[i - 1]];
        }
        else
        {
            sum += m[s[i - 1]];
        }
    }
    sum += m[s[n - 1]];
    return sum;
}
int main()
{
    string s = "III";
    int ans = romanToInt(s);
    cout << ans << endl;
    return 0;
}