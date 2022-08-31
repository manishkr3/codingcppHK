#include <vector>
#include<iostream>
using namespace std;

int main()
{

    vector<vector<int>> v{
        {1, 0, 1, 1, 1}, {1, 0, 0, 1}};
    cout <<"size of the rows : "<< v.size()<<"\n";
    cout<<"size of the columns in first row : "<<v[0].size()<<"\n";
    
    int sum = 0;
    for (auto i : v)
    {
        sum += i.size();
    }
    cout << sum<<"\n";
    
    return 0;
}