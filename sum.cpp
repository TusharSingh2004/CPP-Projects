//Finding pairs in a sorted array whose sum is equal to num
#include<iostream>
#include<stdio.h>
using namespace std;



void findingpair(int arr[], int size, int sum)
{
    int b[100], count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i]+ arr[j] == sum && arr[i]<arr[j])
            {
                b[count] = arr[i];
                b[count+1] = arr[j];
                count+=2;
            }
        }
        
    }
    for (int i = 0; i < count; i+=2)
    {
        cout<<b[i]<<" "<<b[i+1]<<endl;
    }
    
}
int main()
{
    system("CLS");

    int sum = 5, array[]= {1,2,3,4,5};
    int num = 0;
    cout<<"Enter Num = ";
    cin>>num;
    if(num >-1)
    {
    findingpair(array, 5, num);
    }
    else{
        cout<<"Enter Valid input";
    }
    return 0;
}