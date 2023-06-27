// Program to print the reverse of a given signed integer 

#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int x, ans = 0; 

    // INT_MAX & INT_MIN are pre-defined in C++ as max integer value and min integer value which can be stored

    cout << "Enter the desired integer: "<< endl;
    cin >> x;

    while (x != 0)
    {
        int digit = x % 10;
        if((ans > INT_MAX) || (ans < INT_MIN))
        cout << "0" << endl;

        ans = (ans * 10) + digit ;
        x = x / 10;
    }
    cout << " Reversed integer is : " << ans;

}