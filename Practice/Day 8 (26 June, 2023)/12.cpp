// Binary to decimal conversion

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the binary representation of number: " <<endl;
    cin>>n;

    int i=0, ans =0;

    while (n != 0)
    {
        int digit = n % 10;
        if(digit == 1)
        ans = ans + pow(2,i);

        n = n/10;
        i++;
    }
    cout<< "Decimal representation is : " << ans<< endl;
}