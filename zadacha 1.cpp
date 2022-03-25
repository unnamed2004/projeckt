#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cout <<endl<<"Input a number: ";
    cin >>a;
    for (int u = 1 ; u<=a ; u++)
    {
        cout <<endl;
        cout <<"Multiplication: "<<u<<endl ;

        for (int i = 1; i <= 10; i++)
        {
            cout <<a << " * " <<i<<" = "<<a*i<< endl;
        }

    }
}
