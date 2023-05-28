// Program to print the sum of even integers between 1 to N

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=2;
    cout<<"N = ";
    cin>>n;

    while(i<=n)
    {
        sum += i;
        i =i+2;
        
    }
    cout<<"Sum = "<<sum;

}