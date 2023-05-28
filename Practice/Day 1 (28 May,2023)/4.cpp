// Program to print integers 1 to N

#include<iostream>
using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter the number of integers you want to print: ";
    cin>>n;

    while (i<=n)
    {
        cout<<i<<", " ;
        i=i+1;
    }
    
    
}