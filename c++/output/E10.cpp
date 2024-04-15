#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{
    float T ,W ,Y ,X ;

cout<< "Entre com o valor de T: ";
cin>> T;

    if( (T >= 2) && (T <= 100) )
    {

    X = (2 * T) - 4;

    Y = (T / 2) + 4;

    W = (2 * T) + (4 * Y) - (3 * X);

    cout<< "Valor de X: " << X << endl;

    cout<< "Valor de Y: " << Y << endl;

    cout<< "Valor de W: " << W << endl;

    }
    else
     {
    cout<< "Valor nao e valido";
     }

return 0;
}