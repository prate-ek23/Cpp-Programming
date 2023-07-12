// Program to find first and last occurrence of an element in a sorted array

#include<iostream>
using namespace std;

//  first occurrence
int firstOcc(int arr[], int n, int key)
{
    int s=0, e = n-1;
    int mid= s+(e-s)/2;
    int ans=-2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e = mid-1;
        }

        else if(key > arr[mid])           //right me jao
        s = mid+1;

        else if (key< arr[mid])           //left me jao
        e = mid-1;

        mid = s+ (e-s)/2;
    }
    return ans;
}

//  last occurrence
int lastOcc(int arr[], int n, int key)
{
    int s=0, e = n-1;
    int mid= s+(e-s)/2;
    int ans=-2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s = mid +1;
        }

        else if(key > arr[mid])         //right me jao
        s = mid+1;

        else if (key< arr[mid])         //left me jao
        e = mid-1;

        mid = s+ (e-s)/2;
    }
    return ans;
}

int main()
{
    int even [11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout << "First Occurrence of 3 is at Index: " << firstOcc(even, 11,3) << endl;
    cout << "Last Occurrence of 3 is at Index: " << lastOcc(even, 11,3) << endl;

    return 0;
}