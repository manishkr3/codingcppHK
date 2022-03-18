#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

 //pair is a class in utility header file in the cpp library
 pair<int, string> p{2,"Krishna"};
 cout<<p.second<<"\n";

 p = {2, "Manish"};
cout << p.second<<"\n";

 return 0;
}