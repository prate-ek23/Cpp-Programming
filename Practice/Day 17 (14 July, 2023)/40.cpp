// Program to find an element in a rotated array using Binary Search

#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s=0, e=n-1;
    int mid = s+ (e-s)/2;

    while(s<e)
    {
        if(arr[mid] >= arr[0])
        s = mid+1;

        else
        e = mid;

        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start =s, end = e;
    int mid = start + (end-start)/2 ;

    while(start <= end)
    {
        if(arr[mid] == key)
        return mid;
        
        else if(key > arr[mid])       //go to right wala part
        start = mid + 1;

        else                       
        end = mid-1;

        mid = start + (end-start)/2;
    }
    return -1;
}

int findPosition (int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    
    if(k >= arr[pivot] && k <= arr[n-1])   
    return binarySearch(arr, pivot, n-1, k);

    else                                          
    return binarySearch(arr, 0, pivot-1, k);
}

int main ()
{
    int arr[5] = {12,15,18,2,4};
    int key = 4;
    int index = findPosition(arr, 5, key);

    cout << "Index of key is: " << index<< endl;
}