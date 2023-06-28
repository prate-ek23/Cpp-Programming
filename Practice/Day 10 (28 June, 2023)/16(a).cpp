// Program to test the working of switch-case block when one of the break-statements is commented

#include<iostream>
using namespace std;
int main ()
{
    int num =1;
    char ch = '1';

    switch ( ch ) 
    {
        case 1:
        cout<< "\n FIRST \n" ;
        cout<< "\n FIRST again \n" ;
        break;

        case '1':
        cout<< "\n CHARACTER ONE \n" ;
        // break;

        default:
        cout << "It is default case." << endl;
    }
    cout <<endl;
    return 0;
}