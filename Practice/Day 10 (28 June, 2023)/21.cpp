// Program using functions to find nCr

#include<iostream>
using namespace std;

int factorial (int n)
{
    int fact = 1;
    
    for (int i=1; i <= n; i++)
    fact *= i;

    return fact;
}

int nCr (int n, int r)
{
    int num = factorial (n);
    int denom = factorial (r) * factorial (n-r);

    return num/denom;
}

int main()
{
    int n,r,ans;

    cout<<  "Enter 'n' and 'r' of nCr: " << endl;
    cin >> n >> r;

    ans = nCr (n,r);

    cout<<"Answer is : "<<ans<<endl;
    return 0; 
}