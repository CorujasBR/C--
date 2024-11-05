#include<iostream>
using namespace std;

void preco(float preco1, float preco2)
{
    float percentual, x;
    x =  (preco1 / 100);
    percentual = (preco2 / x);
    percentual = percentual - 100;

    cout<<"valor do crescimento: "<<percentual<<"%"<<endl;

}

int main()
{float preco1, preco2;
    cout<<"entre com o valor do primeiro preco: "<<endl;
    cin>>preco1;

    cout<<"entre com o  valor do segundo preco: "<<endl;
    cin>>preco2;

    preco(preco1, preco2);

}