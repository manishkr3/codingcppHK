#include<iostream>
#include<vector>
using namespace std;
int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 6};
    for(auto x:a)
        cout << x << " ";
    cout << endl;
    
        vector<int>
            v = {1, 2, 3, 4, 5, 6, 6};
    for(auto x:v)
        cout << x << " ";
    return 0;
}