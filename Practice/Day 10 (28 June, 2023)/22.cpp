// Program using functions to print counting upto n

#include<iostream>
using namespace std;

// function signature
void printCounting (int num)
{
    // function body
    for(int i=1; i<= num ; i++)
    cout << i << " ";

    cout << endl;
}

int main ()
{
    int n;
    cout<< "Enter the number upto which you want counting to be printed: " <<
    cin >> n;

    // function call
    printCounting (n);

    return 0;
}