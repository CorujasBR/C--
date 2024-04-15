#include<iostream>
#include<cstdlib>
#include <cmath>

using namespace std;

int main()

{
int X;

    cout<< "Entre com o valor: ";
    cin >> X;

        if( X > 0)
        {
            cout<< " Valor positivo";
        }
            else
             if( X <= 0)
            {
            cout<< "Valor negativo";
            }

            return 0;
}