// Program to print square pattern with number of rows and column equal to N and each row having entries equal to the row number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the side of square pattern: ";
    cin>>n;
    int i = 1;

    while(i<=n)
    {
        int j=1;

        while(j<=n)
        {
            cout<<i<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}