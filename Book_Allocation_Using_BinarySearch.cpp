/*
Given an array arr of Integer numbers, arr[i] represents the number of pages in the i-th book.
There are 'm'number of students, and the task is to allocate all the books to the students.
Allocate books in such a way that:
I. Each student gets at least one book.
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.
You have to allocate the book to 'm' students such that the maximum number of pages
assigned to a student is minimum.
If the allocation of books is not possible, return -1.
*/
#include<iostream>
bool isPossible(int arr[], int size, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<size; i++)
    {
        if(pageSum + arr[i]<= mid)
        {
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}   
int BookAllocation(int arr[], int size, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = (start + end)/ 2;
    int ans = -1;
    while (start <= end)
    {
        if(isPossible(arr, size, m, mid))
        {
            ans = mid ;
            end = mid - 1;//Go Left
        }
        else{
            start = mid + 1;//Go Right
        }
        mid = (start + end)/ 2;
    }
    return ans;
    
}
int main()
{
    system("CLS");
    int array[]={10,20,30,40};
    std :: cout<<BookAllocation(array, 4, 2);
}