// find output
// Program to test the passing by value

#include<iostream>
using namespace std;
int update(int a)
{
    a -= 5;
    return a;
}

int main()
{
    int a= 15;
    update(a);
    cout << a<< endl;
}