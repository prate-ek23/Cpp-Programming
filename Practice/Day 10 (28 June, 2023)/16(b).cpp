// Program to test the working of switch-case block when the argument inside switch is entered in expression form

#include<iostream>
using namespace std;

int main()
{
    int num =1;
    char ch ='1';

    switch (2*num)
    {
        case 2:
        cout << "\n FIRST \n";
        break;

        case '1':
        cout<< "SECOND \n";
        break;

        default:
        cout << "It is a defalut case \n";
    }
    return 0;
}