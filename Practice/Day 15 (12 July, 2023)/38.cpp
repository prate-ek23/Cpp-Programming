// Program to find index of peak element in a mountain array 

#include<iostream>
using namespace std;

int peakIndex(int arr[], int size)
{
    int s =0;
    int e= size-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
        s= mid +1;

        else
        e = mid;

        mid = s+ (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[6] ={0,1,3,2,-1};
    cout << "Index of peak element: " << peakIndex(arr,6)<<endl;
    return 0;
}