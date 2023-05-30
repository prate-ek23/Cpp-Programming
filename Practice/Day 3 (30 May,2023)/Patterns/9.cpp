// Program to print a triangular pattern of order N with each row having number of entries equal to row number and each entry is result of increment in previous entry

#include<iostream>
using namespace std;

int main()
{
    int n,col,row=1,i;
    cin>>n;

    while(row<=n)
    {
        i=row;
        col=1;
        while(col<=row)
        {
            cout<<i<<" ";
            col++; 
            i--;
        }
        cout<<endl;
        row++;
    }
}