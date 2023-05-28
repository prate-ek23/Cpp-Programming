// Program to convert fahrenheit into celsius

#include<iostream>
using namespace std;

int main()
{
    float c,f;
    int n;
    f=1;
    cout<<"How many values you want to convert? ";
    cin>>n;
    cout<<"Fahrenheit      |      Celsius"<<endl;

    while(f<=n)
    {
        c = (f-32)*5/9;
        cout<<"  "<<f<<"             |       "<<c<<endl;
        f++;    
        
    }
}