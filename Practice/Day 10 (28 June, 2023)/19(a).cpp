// Another program using functions to calculate power of a base 

#include<iostream>
using namespace std;

int power ()
{
    int a,b;
    cout << "Enter the value of base 'a': ";
    cin >> a;

    cout << "Enter the value of power 'b': ";
    cin >> b;

    int ans =1;

    
    for (int i=1; i<=b; i++)
    ans *= a;

    return ans;

}

int main ()
{
    int ans = power ();
    cout << "Answer is: " << ans << endl;

    return 0;
}