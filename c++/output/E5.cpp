#include<iostream>
#include<cstdlib>
#include <cmath>

using namespace std;

int main()
{
    float A, B, C, Delt, X1, X2;

    cout << "Entre com o valor de A: ";
    cin >> A;

cout << "Entre com o valor de B: ";
    cin >> B;


cout << "Entre com o valor de C: ";
    cin >> C;

    Delt = (B*B) - 4*A*C;

if(A == 0)
{
    cout<< "Essa nao e uma equacao de segundo grau";
}

    else
    if( Delt > 0)
    {
    X1 = (-B + sqrt(Delt)) / (2 * A);
    X2 = (-B - sqrt(Delt)) / (2 * A);

    cout << " Valor do X1: ";
    cout << X1;

    cout << " Valor do X2: ";
    cout << X2;
    }

    else
        if (Delt == 0)
        {
        X1 = (-B + sqrt(Delt)) / (2 * A);
        X2 = (-B - sqrt(Delt)) / (2 * A); 

        cout << "Com apenas uma reiz: " << X1 << endl;
        }

        else
        if (Delt < 0)
        {
        cout<< "Delta negativo, nao ah raizes reias" ;
        }


return 0;

}