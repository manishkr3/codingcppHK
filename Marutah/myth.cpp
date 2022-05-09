#include<iostream>
using namespace std;
bool primeAccordingVillage(int n)
{

    int result = 1;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == (n / i))
                result += i;
            else
                result += (i + n / i);
        }
    }
    cout << "sum is : " << result<< endl;
    if (result <= ((3 * n) / 2))
        return true;
    return false;
}
bool primeAccordingMaths(int n)
{
    if (n < 1)
        return false;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int mythOrFact(int N)
{
    // Enter your code here
    if (primeAccordingVillage(N) == primeAccordingMaths(N))
        return 1;
    return 0;
}
int main(){

   int ans= mythOrFact(9);
   cout << ans << endl;
   return 0;
}