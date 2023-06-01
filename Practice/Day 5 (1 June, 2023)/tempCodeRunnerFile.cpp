#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;

    for(a=0,b=1,c=2; a>=0 && b>=1 && c>=2; a--, b--, c--)
    {
    cout<< a<<" " << b<< " "<< c<< endl;
    }
}