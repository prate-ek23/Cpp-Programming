// Program using functions to check whether the given number is Prime or Not

#include<iostream>
using namespace std;

// 1 -> Prime number, 0 -> Not a prime number
bool isPrime (int n)
{
    for(int i= 2; i<n; i++)
    if(n%i == 0)
    return 0;

    return 1;
}

int main ()
{
    int n; 
    cout<< "Enter the number to be tested: " <<
    cin >> n;

    if(isPrime(n))
    cout << "is a Prime number" << endl;
    
    else
    cout << "is a Prime number" << endl;
}