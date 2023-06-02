// Program to compute the difference between the product of its digits and the sum of its digits

#include<iostream>
using namespace std;
int main()
{
    int prod = 1;
    int sum =0, n;

    cout<< "Enter the desired number: "<<endl;
    cin>> n;


    while(n!=0)
    {
        int digit = n%10;
        prod *= digit;
        sum += digit;
        n = n/10;
    }
    int answer = prod -sum;
    
    cout<< "Sum: " << sum<<endl; 
    cout<< "Product: " << prod<<endl; 
    cout<< "Result: " << answer<<endl; 

}