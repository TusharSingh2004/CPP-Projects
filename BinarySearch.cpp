//Program using Binary Search to find data item
#include<iostream>
#include<stdlib.h>
using namespace std;
void showarray(int arr[], int size)
{
     for (size_t i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
        
    }
    cout<<endl;
}
int binarySearch(int arr[], int size, int search)
{
    showarray(arr, size);
    int mid = 0;
    int startingElement = 0;
    int lastElement = size;
    for (int i = 0; i < size; i++)
    {
        mid = (startingElement + lastElement)/2;
        if(search == arr[mid])
        {
            return mid;
        }
        else if(search>mid)
        {
            startingElement = mid;
        }
        else if(search<mid)
        {
            lastElement = mid;
        }
    }
    return -1;
    
}
int main()
{
    system("CLS");
    int even[]= {12,13,14,15,16,17};
    int odd[]= {1,2,3,4,5};
    cout<<binarySearch(even, 6, 12)<<endl;
    cout<<binarySearch(odd, 5, 4);

    

}