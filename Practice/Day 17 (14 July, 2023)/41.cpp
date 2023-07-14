// Program to find square root of a number using binary search
// Print only the integer value of result

#include<iostream>
using namespace std;

long long int binarySearch(int n)
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

int main()
{
    int n;
    cout << "Enter number: " <<endl;

    cin >>n;

    cout << "Square root: "<< binarySearch(n) << endl; 

    return 0;
}