// Program to test the working of arrays with functions, finding length of an array and few other types of arrays  

#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;

    // print the array
    for(int i=0; i < size; i++)
    cout << arr[i] << " ";
    cout << "\n Printing DONE \n";
}

int main()
{
    int first[15];
    printArray(first,15);
    
    int second[3] = {5,7,11};
    printArray(second,3);

    int third[15] = {2,7};
    printArray(third,15);
    
    int fourth[10] = {0};
    printArray(fourth,15);
    
    int fifth[10] = {1};
    printArray(fifth,15);

    // finding length of an array
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth is : " << fifthSize << endl;

    char ch[5] = {'a','b','c','r','p'};
    cout << "Character at index 3: " << ch[3] << endl;

    // printing of character array (not possible with below line, because printArray() can only take integer arrays) 
    // printArray(ch,5);

    // printing of character array
    for(int i =0; i<5; i++)
    cout << ch[i] << " " ;
    cout << "\n Printing DONE \n";

    // other types of arrays 
    double firstDouble[10];
    float firstFloat [9];
    bool firstBool [6];

    cout << "\n \n Everything is FINE\n\n";

}