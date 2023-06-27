// Program to check whether the given integer is a power of 2

#include<iostream>
#include<math.h>

using namespace std;
int main ()
{
    int n;
    cout << "Enter desired number: " << endl;
    cin >> n;

    for(int i = 0; i<= 30; i++)
    {
        int ans = pow(2,i);

        if (ans == n)
        {
            cout << "Power of 2: " << i << "      Result: TRUE \n";
            break;
        }
        
        else 
        cout << "Power of 2: " << i << "     Result: FALSE \n";
    }
}