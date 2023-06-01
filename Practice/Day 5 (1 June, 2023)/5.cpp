// Program to print the sum of numbers from 1 to N

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<< "Enter the value of n: " <<endl;
    cin>>n;

    int sum=0;

    for(int i=1; i<=n; i++)
    sum+=i;

    cout<< sum <<endl;

}