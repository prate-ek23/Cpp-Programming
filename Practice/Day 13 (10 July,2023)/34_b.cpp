// More improvised Program to find intersection of two given arrays which are sorted in non-decreasing order

#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int i=0, j=0;
    int arr1[10] ={2,3,4,4,5,6,7,8,8,8};
    int arr2[10] ={ 1,2,3,4,4,8,9,10,11,15};

    // finding and printing of intersection elements
    cout << "\nThe intersection elements are: " <<endl; 
    while(i<10 && j<10)
    {
        if(arr1[i] == arr2[j])
        {
            cout << arr1[i] << endl;
            i++;
            j++;
        }

        else if(arr1[i] < arr2[j])
        i++;

        else
        j++;
    }
    return 0;
}