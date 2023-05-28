// Program to calculate sum of integers 1 to N 

#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;

    cout<<"Enter the number of integers you want sum of: ";
    cin>>n;

    while(i<=n)
    {
        sum += i;
        
        i++;
    }
    cout<<"Value of sum: "<<sum<<"\n";
}