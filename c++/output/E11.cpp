#include<iostream>
using namespace std;

int main()
{
int Idade;

cout << "Entre com sua idade: ";
cin >> Idade;

if( (Idade > 0) && (Idade <= 19))
{
    cout << "Jovem";
}
    else 
    if((Idade >= 20) && (Idade <= 59))
    {
        cout << "Adulto";
    }

    else
    if(Idade > 59)
    {
        cout << "Idoso";
    }

    else
    {
        cout<< "Valor de idade invalido";
    }

}