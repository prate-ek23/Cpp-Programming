// Program using functions and arrays to compare a given number of elements and give the maximum and minimum value entered

#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;
    
    for(int i=0; i<n; i++)
    if(num[i] < min)
    min = num[i];

    // returning minimum value
    return min;
} 

int getMax(int num[], int n)
{
    int max = INT_MIN;
    
    for(int i=0; i<n; i++)
    if(num[i] > max)
    max = num[i];

    // returning maximum value
    return max;
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