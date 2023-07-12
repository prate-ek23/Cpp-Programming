// Program to use binary search algorithm to find key in a given array
// Return -1 if key is absent

#include<iostream>
using namespace std;
int binarySearch (int arr[], int size, int key)
{
    int start=0;
    int end= size-1;
    int mid= (start+end)/2;
    
    while(start <= end)
    {
        if(arr[mid] == key)        // answer mil gya guys !!
        return mid;

        if (key > arr[mid])       //go to right wala part
        start =mid+1;

        else                           //go to left wala part
        end = mid-1;

        mid = (start+ end)/2; 
    }
    return -1;
}

int main()
{
    int even[6] ={2,4,6,8,12,18};
    int odd [5] = {3,8,11,14,16};

    int evenIndex = binarySearch(even, 6, 20);
    cout << "Index of 20 in even array: " << evenIndex << endl;
    cout << "Index of 18 in even array: " << binarySearch(even,6,18) << endl;

    int oddIndex = binarySearch( odd, 5, 18);
    cout << "Index of 18 in odd array: " << oddIndex << endl;
    
    return 0;
}