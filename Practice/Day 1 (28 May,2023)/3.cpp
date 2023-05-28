// Program to identify whether the entered character is lowercase letter, uppercase letter or numeric

#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter any character: ";
    cin>>ch;

    if(ch>='a' && ch<='z')
    cout<<"Lower case character";

    else if(ch>='A' && ch<='Z')
    cout<<"Upper case character";


    else
    cout<<"Numeric character";
}