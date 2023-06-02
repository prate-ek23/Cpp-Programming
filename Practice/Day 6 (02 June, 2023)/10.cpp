// Program to take an unsigned integer and prints the number of '1' bits it has

#include<iostream>
using namespace std;
int main()
{
    int count =0;
    int n= 000000000000000000001011;
    while(n!=0)
    {
        // checking last bit
        if(n&1)
        count ++;

        n= n>>1;
    }
    cout<< "Number of '1' bits:  " << count <<endl;
}