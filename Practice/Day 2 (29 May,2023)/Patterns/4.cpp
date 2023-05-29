// Program to print square pattern with number of rows and column equal to N and each row having entries starting from N going down to 1.

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
            cout<<n-j+1<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}