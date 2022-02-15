#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
class Customer
{
public:
    string nameOfCustomer;
    int ageOfCustomer;
};

void getCustomerData(int *total)
{
    fstream fout("customer.txt", ios::out);
    cout << "enter nameOfCustomer and ageOfCustomer of each customer\n";
    string *tempName = new string;
    int *tempAge = new int;
    for (int i = 0; i < *total; i++)
    {
        cin >> *tempName;
        cin >> *tempAge;
        fout << *tempName << "\n"
             << *tempAge << endl;
    }
    delete tempName, tempAge;
    fout.close();
}

void readCustomerData(int *total, Customer *customerPointer)
{
    fstream fin("customer.txt", ios::in);
    for (int i = 0; i < *total; i++)
    {
        getline(fin, customerPointer->nameOfCustomer);
        string tempAge1;
        getline(fin, tempAge1);
        customerPointer->ageOfCustomer = stoi(tempAge1);
        customerPointer++;
    }
    fin.close();
}

void showAbove20Customers(int *total, Customer *customerPointer)
{
    cout << "customers with 20+ ageOfCustomer are\n";
    for (int i = 0; i < *total; i++)
    {
        if (customerPointer->ageOfCustomer > 20)
        {
            cout << customerPointer->nameOfCustomer << " ";
            cout << customerPointer->ageOfCustomer << endl;
        }
        customerPointer++;
    }
};
int main()
{
    cout << "enter total no of entries\n";
    int *total = (int *)malloc(sizeof(int));
    cin >> *total;
    getCustomerData(total);
    Customer *customerPointer = new Customer[*total];
    readCustomerData(total, customerPointer);
    showAbove20Customers(total, customerPointer);
    free(total);
    return 0;
}