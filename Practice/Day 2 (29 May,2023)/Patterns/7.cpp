// Program to print ttriangular pattern with order equal to N and each row having entries equal to row number and times the row number

#include<iostream>
using namespace std;
int main()
{
    int n,row=1, col=1;
    cout<<"Enter the order of triangular pattern: ";
    cin>>n;

    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
}