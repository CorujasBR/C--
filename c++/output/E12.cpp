#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

int L1, L2, L3;
    cout<< "Entre com o valor do primeiro lado: ";
    cin>> L1;

    cout<< "Entre com o valor do segundo lado: ";
    cin>>L2;

    cout<< "Entre com o valor do terceiro lado: ";
    cin>> L3;

    if((L1>= L2 + L3) or (L2 >= L1 + L3) or (L3 >= L2 + L1))
    {
        cout<< "Valor nao e valido";
    }

        else
        if(L3 == L2 && L2 == L1)
        {
        cout<< "E um triangulo equilatero";
        }

        else
        if((L1 == L2) or (L1 == L3) or (L3 == L2))
        {
            cout<< "E um triangulo isosceles";
        }

        else
        {
            cout<< "E um triangulo escaleno";
        }

return 0;

}