// Program to check whether the input number is positive, negative or zero.
#include<iostream>
using namespace std;
int main ()
{
    int a;

    cout<<"A = ";
    cin>>a;

    if(a>0)
    cout<<"A is positive \n";

    else if(a==0)
    cout<<"A is zero.\n";

    else 
    cout<<"A is negative \n";
}