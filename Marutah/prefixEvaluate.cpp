#include <bits/stdc++.h>
using namespace std;
int main (){
	int sum = 0;
	int exp[] = {'+', 5, '*', 4, 5};
	int size = sizeof(exp) / sizeof(exp[1]);
	for (int i = size - 1; i >= 0;i--){
	if (exp[i]=='*')
	{
		sum += int(exp[i + 1]) * int(exp[i + 2]);
	}
	else if (exp[i]=='+')
	{
		sum += int(exp[i + 1]) + int(exp[i + 2]);
	}
	cout << endl<<"esnt"<<sum;

	}
	cout<<"work";
}