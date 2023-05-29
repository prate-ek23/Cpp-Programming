// Program to print square pattern with number of rows and column equal to N and each entry is an increment in previous entry starting from first row first column first entry as 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the order of square pattern: ";
    cin>>n;

    int i=1,count=1;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count<<"      ";
            count++;
            j++;
        }
       cout<<endl;
       i++;
    }
}