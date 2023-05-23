//Finding Square Root of An Integer using Binary search up to a certain precesion
#include<iostream>
using namespace std;
int SquareRootUsingBinarySearch(int arr[], int size, int num)
{
    int start = 0;
    int end = num;
    int mid = (start + end)/2;
    int ans = 0;
    while(start <= end)
    {
        int sqr = arr[mid] * arr[mid];
        if(sqr > num)
        {
            end = mid - 1;
        }
        else if(sqr <= num)
        {
            ans = arr[mid];
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    cout<<"DOne SquareRootUsingBinary Search"<<endl;
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        /* code */
        factor = factor / 10;
        for(double j = ans; j*j<n ; j = j +factor)
        {
            ans = j;
        }
    }
    return ans;
    
}
int main()
{
    int* arr;
    int num;
    int precision;
    cout<<"To Find The Square Root Of An Integer: \n"<<"Enter A Number:";
    cin>>num;
    cout<<"Enter Precision between 1 and 4: ";
    cin>>precision;
    if(num>-1 && precision > -1)
    {
    arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = i+1;
    }
    int tempsol = SquareRootUsingBinarySearch(arr, num, num);
    cout<<"The Square Root Of Give Number is "<< morePrecision(num, precision, tempsol);
    }
    else {
        cout<<"Enter Valid Input";
    }
}