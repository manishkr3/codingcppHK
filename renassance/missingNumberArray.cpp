#include<iostream>
using namespace std;
int arr1[10];

int main(){
   int temp,diff;

 int arr[]={1,2,3,4,5,6,7,9,10};
 for(int i=1;i<10;i++){
   temp=1;
diff=arr[i]-temp;
arr1[i]=diff;
temp=arr[i];
arr1[0]=1;
 }
 for(int i=0;i<10;i++)
 cout << "\n "<<arr1[i];
    return 0;
}