// Program to compare two input numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of A: ";
    cin>>a;
    
    cout<<"Enter the value of B: ";
    cin>>b;

    if(a>b)
    cout<<"\nA is greater\n";

    else if(a==b)
    cout<<"\nBoth are equal\n";

    else
    cout<<"\n B is greater";
}