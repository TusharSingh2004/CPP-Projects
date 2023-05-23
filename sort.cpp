//Sorting Array containing only 0s, 1s and 2s
#include<iostream>
#include<stdlib.h>
using namespace std;
void showarray(int arr[], int size)
{
     for (size_t i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";   
    }
    cout<<endl;
}
void sorting0s1s2s(int arr[], int size)
{
    //Creating Variables to store how many 0s, 1s and 2s are there
    int _0count = 0;
    int _1count = 0;
    int _2count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]== 0)
        {
            _0count++;
        }
        else if(arr[i]== 1)
        {
            _1count++;
        }
        else if(arr[i] == 2)
        {
            _2count++;
        }
    }
        for (int j = 0; j < _0count; j++)
        {
            arr[j]=0;
        }
        for (int j = _0count ; j < _1count+_0count; j++)
        {
            arr[j]=1;
        }
        for (int j = _0count + _1count ; j < _1count+_0count+_2count; j++)
        {
            arr[j]=2;
        }
        showarray(arr, size);
}

int main()
{
    system("CLS");
    int array[]={ 0,1,0,1,2,0,1,0,2,1,0,2,1,0,1,2,0};
    sorting0s1s2s(array, 17);
}
