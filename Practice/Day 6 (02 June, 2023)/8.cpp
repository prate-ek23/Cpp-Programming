// Program to test the scope of variables

#include<iostream>
using namespace std;
int main()
{
int a =3;
cout<< a <<endl;

if(true)
{
    int b=5;
    cout<< b <<endl;
}

int b =1;
cout<< b << endl;

// int b=3;   not valid because variable is redefined

cout<< b<< endl;

int i=8;

for(int i=0; i<8; i++)
cout <<  "Hi" <<endl;

for(; i<=8; i++)
cout <<  "Hello" <<endl;

if(1)
{
    int b =10;
    cout<< b<<endl;
    if(1)
    {
        int b =11;
        cout<< b<<endl;

        if(1)
        {
            int b= 12;
            cout<< b<<endl;

            if(1)
            {
                cout<< b<<endl;
            }
        }
    }
}
}