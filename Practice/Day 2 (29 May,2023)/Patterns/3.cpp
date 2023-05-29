// Program to print square pattern with number of rows and column equal to N and each column having entries equal to the column number

#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter the order of square pattern: ";
    cin>>n;
    int i=1;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}