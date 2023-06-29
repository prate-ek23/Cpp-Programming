// Linear Search
// Program to search an array for a given number

#include<iostream>
using namespace std;

bool search (int arr[], int size, int key)
{
    for(int i; i<size; i++)
    { 
        if(arr[i] == key)
        return 1;
    }

    return 0;
}

int main()
{
    int arr[10] = { 5,7,-2,10,22,-2,0,5,22,1};
    cout << "Enter the element to search for : " << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found)
    cout << "Key is present\n";

    else
    cout << "Key is absent\n";

    return 0;
}