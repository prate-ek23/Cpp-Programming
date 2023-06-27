// Program to print the complement of a given positive integer

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter the desired integer: "<< endl;
    cin>> n;

    int m=n, mask = 0;

    if(n == 0)
    {
        cout << "1";
    }

        while (m != 0)
        {
            mask = (mask << 1)|1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        cout << "Complement is : " << ans << endl;
}