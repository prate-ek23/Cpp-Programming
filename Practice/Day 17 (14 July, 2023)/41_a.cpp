// Program to find square root of a number using binary search
// Print the integer value along with the precision value

#include<iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s=0;
    int e=n;
    long long int mid = s+ (e-s)/2;

    long long int ans = -1;
    // long long int is taken to prevent error generation if length goes beyond storage capacity of int

    while(s <= e)
    {
        long long int square = mid * mid;
        if(square == n)
        return mid;

        if(square < n)
        {
            ans =mid;
            s = mid +1;
        }

        else
        e =mid -1;

        mid = s + (e-s)/2;
    } 
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++)
    {
        factor = factor /10;

        for(double j =ans; j*j < n; j= j+factor)
        ans =j;
    }
    return ans;
}

int main()
{
    int n, precision;
    cout << "Enter number: " <<endl;
    cin >>n;

    cout << "Enter precision count: " <<endl;
    cin >>precision;

    int tempSol = sqrtInteger(n);

    cout << "Precised square root: "<< morePrecision(n , precision, tempSol) << endl; 

    return 0;
}