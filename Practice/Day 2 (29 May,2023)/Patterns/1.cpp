// Program to print '*' in N rows and N columns

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter rows and columns of square pattern: ";
    cin>>n;
    int i=1;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}