#include<iostream>
using namespace std;
int main ()
{
    int n, i;
    i=2;
    cout<<"Enter the range of prime numbers: ";
    cin>>n;

    while(i<n);
    {
        if(n%i ==0)
        cout<<"Not prime for: "<< i<< endl;

        else
        cout<<"Prime for: "<< i << endl;

        i++;
    }
}