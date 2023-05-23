//Program to Find Intersection between Arrays
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
void Intersection(int arr1[],int sizearr1, int arr2[], int sizearr2)
{
    int x[100];
    int count = 0;
    for (int i = 0; i < sizearr1; i++)
    {
        for (int j = 0; j < sizearr2; j++)
        {
            if(arr1[i]== arr2[j])
            {
                x[count] = arr2[j];
                count++;
                arr2[j] = INT16_MIN;
                break;
            }
        }  
    }
    if(count != 0)
    {
    cout<<"RESULT"<<endl;
    showarray(x, count);
    }
    else {
        cout<<"-1";
    }
}
int main()
{
    system("CLS");
    int arr1[]= {1,2,2,2,3,4}, arr2[] = {2,2,3,3};
    cout<<"Array 1 : ";
    showarray(arr1, 6);
    cout<<"Array 2 : ";
    showarray(arr2, 4);
    Intersection(arr1, 6, arr2, 4);
    return 0;
}