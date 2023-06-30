// find output
// Program to test the passing by value

#include<iostream>
using namespace std;
int update (int a)
{
    int ans = a*a;
    return ans;
}

int main()
{
    int a = 14;
    a = update(a);
    cout << a << endl;
}