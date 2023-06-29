// Testing the working of array

#include<iostream>
using namespace std;
int main ()
{
    // declare 
    int number[15] ;

    // accessing an array
    cout << "Value at 14 index: " << number[14] << endl;
    // in above line garbage value will appear because no initial value is assigned to array number

    // cout << "Value at 20 index: " << number[20] << endl;
    // in above line syntax error will be generated because array number has size less than 20
    
    // initializing array
    int second[3] = {5,7,11};

    // accessing an element
    cout << "Value at 2 index: " << second[2] << endl;

    int third [15] = {2,7};
    int n = 15;
    cout << "Printing the third array" << endl;

    // print the array (here only first two elements will be printed as 2 and 7 and rest values will be printed as 0 )
    for(int i = 0; i < n; i++)
    cout << third[i] << " " ;

    // initializing all values with 0
    int fourth [10] = {0};
    n = 10;
    cout << "\n\nPrinting the fourth array" << endl;

    // print the array
    for(int i = 0; i < n; i++)
    cout << fourth[i] << " " ;

    // initializing all values with 1 (not possible with below line)
    int fifth [10] = {1};
    n = 10;
    cout << "\n\n Printing the fifth array" << endl;

    // print the array
    for(int i = 0; i < n; i++)
    cout << fifth[i] << " " ;

    cout << "\n Everything is FINE \n";
    return 0;
}