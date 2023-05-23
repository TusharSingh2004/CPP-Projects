//Program To Find Pivot of an Array
#include<iostream>
#include<stdlib.h>
using namespace std;
int FindingPivot(int arr[], int size)
{
    int start = 0;
    int end = size -1;
    int mid = (start + end )/2;
    while(start<end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid+1;
        }
        else if(arr[mid] <= arr[0])
        {
            end = mid;
        }
        mid = (start + end )/2;
    }
    return start;

}

int main()
{
  system("CLS");
  int arr[] = { 2,3,4,5,6,7,8,9,1};
  cout<<"Pivot is "<<FindingPivot(arr, 9)<<endl;
}