// Same as 27.cpp but using built-in max and min funtions

#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n)
{
    int mini = INT_MAX;
    
    for(int i=0; i<n; i++)
    mini = min(mini, num[i]);

    // returning minimum value
    return mini;
} 

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    
    for(int i=0; i<n; i++)
    maxi = max(maxi, num[i]);

    // returning maximum value
    return maxi;
} 

int main()
{
    int size;
    cout << "Enter number of elements you want to compare:  " << endl;
    cin >> size;

    // int num[size];  ----> Not a good practice to declare an array with a variable size
    int num [100];
    cout << "\nEnter the numbers: \n";

    // taking input in array 
    for(int i =0; i< size; i++)
    cin >> num[i];

    cout << "Maximum value is: " << getMax(num,size) << endl;
    cout << "Minimum value is: " << getMin(num,size) << endl;

    return 9;
}