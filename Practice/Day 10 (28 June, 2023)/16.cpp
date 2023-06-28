// Program to test the working of switch-case block

#include<iostream>
using namespace std;
int main ()
{
    int num =2;
    cout << endl;

    switch (num)
    {
        case 1: 
        cout << "FIRST" << endl;
        break;

        case 2: 
        cout << "SECOND" << endl;
        break;

        default: 
        cout << "It is default case." << endl;
    }

    cout << endl;
    return 0;
}