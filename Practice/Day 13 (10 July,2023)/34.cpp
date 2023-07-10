// Program to find intersection of two given arrays which are sorted in non-decreasing order

#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr1[10] ={2,3,4,4,5,6,7,8,8,8};
    int arr2[10] ={ 1,2,3,4,4,8,9,10,11,15};

    // finding and printing of intersection elements
    cout << "\nThe intersection elements are: " <<endl; 
    for(int i=0; i<10; i++)         // loop to check elements of arr1
    {
        int element =arr1[i];
        for(int j=0; j<10; j++)     // loop for checking elements of arr2
        {
            if(element == arr2[j])
           {
                cout<<element << endl;
                arr2[j] =INT_MIN; 
             // value updated to avoid re-matching of same element
                break;
           }
        }
    }
return 0;
}