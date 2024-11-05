#include<iostream>
using namespace std;

int preco(float preco1, float preco2)
{
    float percentual, x, y;
    x =  (preco1 / 100);
    percentual = (preco2 / x);
    y = 100 - percentual ;
    

    return y;
}

int main()
{float preco1, preco2, resultado;
    cout<<"entre com o valor do primeiro preco: "<<endl;
    cin>>preco1;

    cout<<"entre com o  valor do segundo preco: "<<endl;
    cin>>preco2;

    resultado = preco(preco1, preco2);

    cout<<" valor do desconto:"<<resultado<<"%";

}