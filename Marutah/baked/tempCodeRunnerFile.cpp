#include <iostream>
#include <map>
using namespace std;
int romanToInt(string s)
{
  map<char, int> m;
  int n = s.length();
  char I, V, X, L, C, D, M;
  m['I'] = 1;
  m['V'] = 5;
  m['X'] = 10;
  m['L'] = 50;
  m['C'] = 100;
  m['D'] = 500;
  m['M'] = 1000;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    char cur = s[i];
    cout << cur << " " << m[s[i]]<<" "<<s[i] << endl;
    if (i == n - 1)
    {
      sum += m[cur];
      return sum;
    }
    cout << cur << " " << m[s[i]] << " " << s[i] << endl;

    char nxt = s[i + 1];
    if (m[cur] >= m[nxt])
    {
      sum += m[cur];
    }
    else
    {
      sum -= m[cur];
    }
  }
  return sum;
}
int main()
{
  string s = "III";
  int ans = romanToInt(s);
  cout << ans<<endl;
  return 0;
}