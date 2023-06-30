// CodeStudio problem -> Find Unique
// Program to find unique number in the array, such that it appears only once but other elements appear twice

#include<iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int ans = 0;
    for( int i = 0; i< size; i++)
    ans = ans ^ arr[i];

    return ans;
}

int main ()
{
    int arr[9]= {2,3,9,9,1,3,2,7,7};

    cout << "The Unique element in array is: " << endl;
    cout << findUnique(arr,9) << endl;
    return 9;
}