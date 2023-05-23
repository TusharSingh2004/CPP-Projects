//Program to find First And Last Occurence of a data item in a sorted array
#include<iostream>
#include<stdlib.h>
using namespace std;
void showarray(int arr[], int size)
{
     for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";  
    }
    cout<<endl;
}
int FirstOccurrence(int arr[], int size ,int key)
{
    int start = 0, end = size-1, mid = (start+end)/2, ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] > key)//Go Left
        {
            end = mid-1;
        }
        else if(arr[mid] < key)//Go Right
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return ans;

}
int LastOccurrence(int arr[], int size ,int key)
{
    int start = 0, end = size-1, mid = (start+end)/2, ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid +1;
        }
        else if(arr[mid] > key)//Left jao
        {
            end = mid-1;
        }
        else if(arr[mid] < key)//Right jao
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return ans;

}
int main()
{
    int array[] ={ 1,1,1,1,2,2,3,3,4,5}, num;
    system("CLS");
    showarray(array, 10);
    cout<<"Program to find First And Last Occurence of a data item in a sorted array:"<<endl<<"Enter an Integer Number:";
    cin>>num;
    //A for loop to check if the number is present in array
    for (int i = 0; i < 10; i++)
    {
        if(num == array[i])
        {
            cout<<"Index = "<<FirstOccurrence(array, 10, num)<<"/n"<<"Index = "<<LastOccurrence(array, 10, num)<<endl;
            break;
        }
    }
    return 0;
}