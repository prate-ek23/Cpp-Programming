// Program to test the working of switch-case block using it in making a mini calculator

#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    char op;

    cout<< "\nEnter value of a & b: \n";
    cin >> a >> b;

    cout<< "Enter the operation you want to perform:\n ";
    cin >> op;

    cout<< " \n Result: ";

    switch (op)
    {
    case '+':
        cout << (a+b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;
    
    case '%':
        cout << (a % b) << endl;
        break;
    
    default:
        cout << "Please enter a valid operation " << endl;
        break;
    }
    return 0;
}