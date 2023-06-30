// CodeStudio problem -> Find Duplicate in Array
// Program to find duplicate number in the array, such that it appears twice but other elements appear only once

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int ans =0;

    // XORing all array elements
    for(int i=0; i < size; i++)
    ans = ans ^ arr[i];

    // XOR [1 -> n-1]
    for(int i=0; i< size; i++)
    ans = ans ^ i;

    return ans;
}

int main()
{
    int arr[5] = {1,2,3,4,3};

    cout << "\n Duplicate number is: \n" << findDuplicate(arr, 5)<< endl;
    return 0;
}