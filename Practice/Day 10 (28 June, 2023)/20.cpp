// Program using functions to test whether the given number is Even or Odd


#include<iostream>
using namespace std;

// 1 -> EVEN, 0 -> ODD
bool isEven(int a)
{
    // odd
    if (a&1)
    return 0;

    // Even 
    else
    return 1;
}

int main ()
{
    int num;

    cout << "Enter the number to be tested: " << endl;
    cin >> num;

    if(isEven(num))
    cout << "Number is EVEN" << endl;
    
    else
    cout << "Number is ODD" << endl;
}