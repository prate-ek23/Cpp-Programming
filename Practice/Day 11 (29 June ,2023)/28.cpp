// Program to update an array in a function

#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "\nInside the functions \n";

    // updating array's first element
    arr[0] = 120;

    // printing the array
    for(int i= 0; i < 3; i++)
    cout << arr[i] << " ";

    cout << "\n Going back to main function \n" ;
}

int main()
{
    int arr[3] = {1,2,3};

    // printing the array before updation
    cout << "\n\n Printing in main function\n\n";

    for(int i=0; i<3; i++)
    cout << arr[i] << " ";

    update(arr,3);
    // printing the array after updation
    cout << "\n Printing in main function after updation \n\n";
    for(int i=0; i<3; i++)
    cout << arr[i] << " ";

    return 0;
}