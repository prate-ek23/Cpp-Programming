// Program to test increment and decrement operators

#include<iostream>
using namespace std;
int main()
{
    int a=1, b=2;

    if(a-- > 0 && ++b >2)
    cout<<"Stage1- Inside If"<<endl;
    
    else
    cout<<"Stage2- Inside else"<<endl;

    cout<< a <<" "<<b<<endl;
}