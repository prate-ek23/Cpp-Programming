// Program to print triangular pattern with number of rows equal to N and each row having "*" equal to row number 

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter the order of triangular pattern: ";
    cin>>n;
    int row=1;

    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
        cout<<"*";
        col++;
        }
        cout<<endl;
        row++;
    }
}