//Program To Find non Duplicate number in array 
#include<iostream>
#include<stdio.h>
using namespace std;
void showarray(int arr[], int size)
{
     for (size_t i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";    
    }
    cout<<endl;
}

void Finding_Duplicate_Number(int arr[], int size)
{
      int ans=0;
    for(int i=0;i<size; i++)
    {
        ans = ans^arr[i];
    }  cout<<"The answer is: "<<ans<<endl;
}

int main()
{
    system("cls");
    int array[] = { 1,2,3,2,3};
    showarray(array, 5);
   Finding_Duplicate_Number(array, 5);    
return 0;
}