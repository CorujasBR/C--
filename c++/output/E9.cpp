#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{

int X,Y,R;

cout<< "Entre com o valor a ser dividido: ";
cin>> X;

cout << "Entre com o Valor que vai dividir: ";
cin>> Y;

R = (X%Y);

    if(R>0)
    {
    cout<< "Esse numero nao e divisivel";
    }

        else
        {
        cout << "Certamente um numero divisivel por outro";
        }

return 0;

}

