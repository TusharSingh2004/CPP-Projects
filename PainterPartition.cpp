/*
Given an array/list of length 'N', where the array/list represents the boards and each
element of the given array/list represents the length of each board. Some 'numberOfPainter' numbers of
painters are available to paint these boards. Consider that each unit of a board takes 1 unit
of time to paint.
You are supposed to return the area of the minimum time to get this job done of painting all
the 'N' boards under a constraint that any painter will only paint the continuous sections of
boards.
*/
#include<iostream>
//Function to check if it is possible to paint the boards with given constraints
// Returns true if it is possible, false otherwise
bool isPossible(int arr[], int size, int mid, int numberOfPainter)
{
    int painterCount = 0;
    int Time = 0;
        for(int i=0; i< size; i++)
        {
            // If the current board can be painted within the time limit
            if(Time + arr[i] <= mid)
            {
                Time = Time + arr[i];
            }
            else
            {
            // Increase the painter count and check if it exceeds the available number of painters               
                painterCount++;
                if(painterCount > numberOfPainter || arr[i] > mid)
                {
                    return false;
                }
            // Reset the time for the next painter
                Time = arr[i];
            }
        }
        return true;
}
// Function to find the largest minimum distance using binary search
// Returns the minimum time required to paint all the boards
int findLargestMinDistance(int arr[], int size, int numberOfPainter)
{
    int start = 0 ;
    int sum  = 0;
    // Calculate the sum of all board lengths
    for(int i=0; i<size; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = (start + end)/ 2;
    int ans = -1;
    // Binary search loop to find the largest minimum distance
    for(int i = 0; i<size; i++)
    {
        // If the current configuration is possible, update the answer and search for a smaller time
        if(isPossible(arr, size, mid, numberOfPainter))
        {
            ans = mid;
            end = mid - 1;
        }
        // If the current configuration is not possible, search for a larger time
        else
        {
            start = mid + 1;
        }
        mid = (start + end)/ 2;
    }
    return ans;
}
int main()
{
    int arr[] = {5,5,5,5};
    // Find the minimum time required to paint all the boards with 2 painters
    std :: cout<<findLargestMinDistance(arr, 4,2);


}